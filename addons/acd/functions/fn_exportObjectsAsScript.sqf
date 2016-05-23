/*
	function: adc_fnc_exportObjectsAsScript
	author: vitaly'mind'chizhikov
*/

params ["_type","_enableSimulation"];
private ["_selectedObjects","_outputText","_br","_tab","_identity","_posASL","_vectorDir","_vectorUp"];
_selectedObjects = (get3DENSelected "object");
if (count _selectedObjects == 0) exitWith {["acd_nothingSelected",5] call BIS_fnc_3DENNotification;};
_outputText = "";
_br = toString [10];
_tab = toString [9];
_outputText = _outputText + 'private ["_objects","_object","_data"];' + _br + '_data = [' + _br + _tab;
{
	_identity = "";
	if (_type == "simple") then {_identity = (getModelInfo _x) select 1};
	if (_type == "vehicle") then {_identity = typeOf _x};
	_posASL = getPosASL _x;
	_vectorDir = vectorDir _x;
	_vectorUp = vectorUp _x;
	_outputText = _outputText + format ['["%1", %2, [%3,%4]]', _identity,_posASL,_vectorDir,_vectorUp];
	if (_forEachIndex != ((count _selectedObjects) - 1)) then {
		_outputText = _outputText + "," + _br + _tab;
	} else {
		_outputText = _outputText + _br;
	};
} forEach _selectedObjects;
_outputText = _outputText + '];' + _br + '_objects = [];' + _br + '{' + _br + _tab;
if (_type == "simple") then {
	_outputText = _outputText + '_object = createSimpleObject [(_x select 0), (ASLToAGL(_x select 1))];' + _br + _tab;
};
if (_type == "vehicle") then {
	_outputText = _outputText + '_object = (_x select 0) createVehicle (ASLToAGL(_x select 1));' + _br + _tab;
};
_outputText = _outputText + '_object setVectorDirAndUp (_x select 2);' + _br + _tab;
_outputText = _outputText + '_object setPosASL (_x select 1);' + _br + _tab;
if (_type == "vehicle") then {
	if (_enableSimulation) then {
		_outputText = _outputText + '_object enableSimulationGlobal true;' + _br + _tab;
	} else {
		_outputText = _outputText + '_object enableSimulationGlobal false;' + _br + _tab;
	};
};
_outputText = _outputText + '_objects pushBack _object;' + _br;
_outputText = _outputText + '} forEach _data;' + _br;
_outputText = _outputText + '_objects;' + _br;
copyToclipboard _outputText;
if (_type == "simple") then {["acd_scriptExportedSimple",5] call BIS_fnc_3DENNotification;};
if (_type == "vehicle") then {["acd_scriptExportedVehicle",5] call BIS_fnc_3DENNotification;};