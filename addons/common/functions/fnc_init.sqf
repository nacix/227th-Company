#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Used to initialize player event handlers for changes in weapon state. This is necessary because Arma doesn't properly handle pointer switching with visible lasers on clients.
 *
 * Without these functions, switching weapons or pointers while a laser was already active would cause the previous iteration's laser to transfer to the new weapon or pointer's memory points.
 * This would only occur when the new weapon or pointer had the same memory points as the old one. These functions will be removed if/when a proper patch is implemented.
 *
 * MACROS() can be found in the main folder's script_macros.hpp file.
 *
 * Arguments:
 * NONE
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [] call krt_common_fnc_init;
 *
 * Public: No
*/

if (!hasInterface || !local player) exitWith {}; // Only executes on player client

TRACE_1("init",player);

GVAR(didMRT) = false; // Used to track when attachments are switched using MRT

// Fired if _unit's weapon or pointer is switched while their laser is active
[GVAR(weaponStateChanged), {
	_this params ["_unit", "_newWeapon", "_newPointer", "_prevWeapon", "_prevPointer"];

	if (_newPointer isEqualTo "") exitWith {}; // Break out if our new weapon doesn't have a laser

	if (_newWeapon isNotEqualTo _prevWeapon) exitWith { [_unit, _newWeapon] call FUNC(disablePointerUntilReady) }; // Handles weapon switching

	if (_unit isIRLaserOn _newWeapon) exitWith { _unit call FUNC(resetPointer) }; // Handles non-mrt and non-primary pointer switching
}] call CBA_fnc_addEventHandler;

// Fired when an attachment is switched using MRT. Due to how MRT works, this is safer (and faster) than handling swaps ourselves.
["CBA_attachmentSwitched", {
	params ["_unit", "_currentAcc", "_futureAcc", "_weaponIndex"];
	private _weapon = currentWeapon _unit;

	// Break out if our current attachment doesn't have a laser. We also have to exit if we aren't holding our primary.
	if (_weaponIndex != 0 || _weapon isNotEqualTo primaryWeapon _unit || !HASLASER(_futureAcc)) exitWith {};

	if (GVAR(isUnitLaserOn)) then { _unit action ["IRLaserOn", _unit] }; // Re-enables the laser if it was active
	GVAR(didMRT) = true;
}] call CBA_fnc_AddEventHandler;

// This PFH fires our weaponStateChanged EH if the player's weapon or pointer are changed via non-MRT sources
[
	{
		private _newWeapon = currentWeapon player;
		private _newPointer = POINTER(player,_newWeapon);

		// Waits for our unit's weapon or pointer to differ from the last iteration
		if (_weapon isNotEqualTo _newWeapon || _pointer isNotEqualTo _newPointer) then {
			if (GVAR(didMRT)) then { GVAR(didMRT) = false } else { [GVAR(weaponStateChanged), [player, _newWeapon, _newPointer, _weapon, _pointer]] call CBA_fnc_localEvent };

			_weapon = _newWeapon;
			_pointer = _newPointer;
		} else {
			GVAR(isUnitLaserOn) = player isIRLaserOn _weapon; // Sends out the current state of our laser pointer
		};
	},
	0, // PFH will run every frame
	{},
	{ _weapon = ""; _pointer = "" }, // These variables are initialized once: when the PFH is created
	{},
	{ true }, // PFH has no run conditions
	{ false }, // PFH will never delete itself 
	["_weapon", "_pointer"] // These variables are passed to the PFH's scope and updated on each iteration
] call CBA_fnc_createPerFrameHandlerObject;