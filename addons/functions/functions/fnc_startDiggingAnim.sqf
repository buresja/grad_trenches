params ["_unit", "_trench", "_type"];

_unit playActionNow "PlayerCrouch"; // MIDDLE

[{(stance (_this select 0) == "CROUCH")},{
   params ["_unit", "_trench", "_type"];

   [_unit, "AinvPknlMstpSnonWnonDnon_medic4"] call ace_common_fnc_doAnimation;

   if (_type == "diggingHelp") exitWith {
      [_trench,_unit] call FUNC(addDigger);
   }:
   if (_type) then {
      [_trench,_unit] call FUNC(continueDiggingTrench);
   }else{
      [_trench,_unit] call FUNC(removeTrench);
   };
},[_unit,_trench]] call CBA_fnc_waitUntilAndExecute;
