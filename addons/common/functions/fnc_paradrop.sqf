#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Moves unit group to provided altitude on postInit and pulls a parachute at pullHeight. Unit backpacks will NOT be removed.
 *
 * Arguments:
 * 0: Group leader <OBJECT>
 * 1: Starting altitude <NUMBER>
 * 2: Parachute pull height <NUMBER> (Optional -> default=60)
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * [_unit, 1000] call krt_common_fnc_paradrop; // Unit will drop from 1000m and pull chute at 60m
 * [_unit, 1000, 100] call krt_common_fnc_paradrop; // Unit will drop from 1000m and pull chute at 100m
 *
 * Public: No
*/

params ["_unit", "_altitude", ["_pullHeight", 60]];

TRACE_3("paradrop",_unit,_altitude,_pullHeight);

// forEach: parses every unit in the provided unit's group and sends them to the sky
{
	if (isPlayer _x) then { LOG_1("Skipping paradrop for [%1] (unit is player)",_x); continue };
	
	LOG_2("Setting paradrop height of unit [%1] to %2m",_x,_altitude);
	[_x, _altitude] call BIS_fnc_setHeight;

	// _this select 0  -> _unit | _this select 1 -> _pullHeight
	[{ (position (_this#0)) select 2 <= (_this#1) }, {
		_target = _this#0;

		// Sets the unit's chute variant based on their rank
		private _chuteType = "ls_misc_hawkbatSteerable_parachute";

		// Create the selected chute and move our unit into it
		LOG_1("Deploying parachute on unit [%1]",_target);
		_chute = createVehicle [_chuteType, position _target, [], 0, "Fly"];
		_chute setPos position _target;
		_target moveInDriver _chute;
		_chute allowDamage false;
	}, [_x, _pullHeight], 120] call CBA_fnc_waitUntilAndExecute;
} forEach units group _unit;