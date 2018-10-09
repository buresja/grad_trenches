params ["_unit", "_trench", "_type"];

_unit playActionNow "PlayerCrouch"; // MIDDLE

[{(stance (_this select 0) == "CROUCH")},{
   params ["_unit", "_trench", "_type"];
   if (_type == "diggingHelp") exitWith {
      [_unit,_trench] call FUNC(addDigger);
   }:
   if (_type) then {
      [_unit,_trench] call FUNC(continueDiggingTrench);
   }else{
      [_unit,_trench] call FUNC(removeTrench);
   };
},[_unit,_trench]] call CBA_fnc_waitUntilAndExecute;
