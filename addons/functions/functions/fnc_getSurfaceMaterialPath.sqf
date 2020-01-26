#include "script_component.hpp"

params [
    ["_object", objnull, [objNull]],
    ["_texture", ""]
];

if (isNull _object) exitWith {};

private _defaultMaterial = "";

if (_texture isEqualTo "" || {_texture isEqualTo "z\ace\addons\apl\data\zr_plevel_co.paa"}) exitWith {_defaultMaterial};

private _splitt = _texture splitString "\";
private _string = _splitt select (count splitt - 1);



if (isNil {_result} || _result isEqualTo []) then {
    _result = _defaultMaterial;
    diag_log format ["GRAD_Trenches: Type: %1, Position: %2, WorldName: %3, SurfaceType: %4, Texture: %5", (typeof _object), (position _object), worldName, _surfaceType, _result];
};

_result;

