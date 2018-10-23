#include "script_component.hpp"

params ["_unit"];

private _sound = selectRandom [
   QPATHTOEF(assets,data\sounds\digging1.wav),
   QPATHTOEF(assets,data\sounds\digging2.wav),
   QPATHTOEF(assets,data\sounds\digging3.wav),
   QPATHTOEF(assets,data\sounds\digging4.wav),
   QPATHTOEF(assets,data\sounds\digging5.wav),
   QPATHTOEF(assets,data\sounds\digging6.wav),
   QPATHTOEF(assets,data\sounds\digging7.wav)
];

private _pos = getPosWorld _unit;

playSound3D [_sound, _pos, false];
