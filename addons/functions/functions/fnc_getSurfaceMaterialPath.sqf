#include "script_component.hpp"

params [
    ["_object", objnull, [objNull]],
    ["_texture", ""]
];

if (isNull _object) exitWith {};

private _defaultMaterial = "";

if (_texture isEqualTo "" || {_texture isEqualTo "z\ace\addons\apl\data\zr_plevel_co.paa"}) exitWith {_defaultMaterial};

//Splitt the path and select the filename
private _splitt = _texture splitString "\";
private _string = _splitt select (count _splitt - 1);
systemChat format ["%1", _splitt];
systemChat format ["%1", _string];

//splitt off the suffix
_splitt = _string splitString "_";
systemChat format ["%1", _splitt];

//Remove suffix
if ("detail" in _splitt) then {
    _splitt deleteAt (count _splitt - 1);
} else {
    _splitt deleteAt (count _splitt);
};
systemChat format ["%1", _splitt];

_string = _splitt joinString "_";
systemChat format ["%1", _string];


private _result = _defaultMaterial;
if (isNil {_result} || _result isEqualTo []) then {
    _result = _defaultMaterial;
};

_result;

