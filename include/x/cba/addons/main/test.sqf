// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// -----------------------------------------------------------------------------

#include "script_component.hpp"

#define CATEGORIES ["arrays", "common", "diagnostic", "events", "hashes", "network", "strings", "vectors", "jr"]

SCRIPT(test);

// ----------------------------------------------------------------------------

LOG(" =  =  = --- Testing --- =  =  = ");

{
    private _test = execVM format ["\x\cba\addons\%1\test.sqf", _x];
    waitUntil { scriptDone _test };
} forEach CATEGORIES;
