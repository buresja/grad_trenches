params ["_unit", "_trench"];

_unit playActionNow "PlayerCrouch"; // MIDDLE

[{(stance (_this select 0) == "CROUCH")},{
   params ["_unit", "_trench"];
   [{
      params ["_args", "_handle"];
      _args params ["_unit", "_trench"];

      if (
         (_unit getVariable ["ace_trenches_isDiggingId", -1] != ace_trenches_trenchId) ||
         !(_trench getVariable ["ace_trenches_digging", false]) ||
         (_trench getVariable [QGVAR(diggerCount), 0] <= 0) ||
         (GVAR(stopBuildingAtFatigueMax) && (ace_advanced_fatigue_anReserve <= 0))
      ) exitWith {
         [_handle] call CBA_fnc_removePerFrameHandler;
      };

      [_unit, "AinvPknlMstpSnonWnonDnon_medic4"] call ace_common_fnc_doAnimation;
      [_unit] call FUNC(playDigSound);

   },5,[_unit, _trench]] call CBA_fnc_addPerFrameHandler;

},[_unit, _trench]] call CBA_fnc_waitUntilAndExecute;
