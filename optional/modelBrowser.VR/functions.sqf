ct_fnc_openEditor = {
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", CT_var_hookEH];
	CT_var_cam = 'camera' camCreate [(getPos player) select 0, (getPos player) select 1, ((getPos player) select 2) + 2];
	CT_var_cam cameraEffect ["internal","back"];
	CT_var_cam setDir (getDir player);
	CT_var_camIsMoving = false;
	CT_var_camIsRotating = false;
	player allowDamage false;
	player enableSimulation false;
	showCinemaBorder false;
	cameraEffectEnableHUD true;
	call CT_fnc_installAllEHs;
	"buildTool" call CT_fnc_cursorChangeTool; "buildTool" call CT_fnc_cursorChangeTool;
	"open" call CT_fnc_infoGUI;
	"open" call CT_fnc_controlsGUI;
	(findDisplay 46) displayAddEventHandler ["keyDown", "_this call test_go"];
};
ct_fnc_closeEditor = {
	private ["_pos"];
	"close" call CT_fnc_infoGUI;
	"close" call CT_fnc_controlsGUI;
	_pos = getPosATL CT_var_cam;
	player setDir (getDir CT_var_cam);
	player setPosATL _pos;
	player allowDamage false;
	player enableSimulation true;
	call CT_fnc_disableAllEHs;
	CT_var_cam cameraEffect ["terminate","back"];
	CT_var_hookEH = (findDisplay 46) displayAddEventHandler ["keyDown", {
		_handled = false;
		if ((_this select 1) == 87) then {_handled = true; call ct_fnc_openEditor;};
		_handled;
	}];
};
changObjHeight = {
	params ["_amount"];
	if (!isNull obj) then {
		_pos = getPosASL obj;
		_height = (_pos select 2) + _amount;
		_pos set [2, _height];
		obj setPosASL _pos;
		heightOffset = heightOffset + _amount;
	};
};
changObjDir = {
	params ["_amount"];
	if (!isNull obj) then {
		obj setDir (getDir obj + _amount);
		dirOffset = dirOffset + _amount;
	};
};
test_go = {
    private ["_handled", "_ctrl", "_dikCode", "_shift", "_ctrlKey", "_alt"];
    _ctrl = _this select 0;
    _dikCode = _this select 1;
    _shift = _this select 2;
    _ctrlKey = _this select 3;
    _alt = _this select 4;
    _handled = false;
	
	if (_dikCode == 156) then {_handled = true; 0 call openModelMenu;};
	if (_dikCode == 55) then {_handled = true;execVM "functions.sqf";execVM "config.sqf";hintSilent "functions and configs are re-compiled"};
	if (!_ctrlKey AND !_shift AND !_alt) then {
		if (_dikCode == 200) then {_handled = true;[3] call changObjHeight;};
		if (_dikCode == 208) then {_handled = true;[-3] call changObjHeight;};
		if (_dikCode == 203) then {_handled = true;[10] call changObjDir;};
		if (_dikCode == 205) then {_handled = true;[-10] call changObjDir;};
	};	
	if (!_ctrlKey AND _shift AND !_alt) then {
		if (_dikCode == 200) then {_handled = true;[10] call changObjHeight;};
		if (_dikCode == 208) then {_handled = true;[-10] call changObjHeight;};
		if (_dikCode == 203) then {_handled = true;[45] call changObjDir;};
		if (_dikCode == 205) then {_handled = true;[-45] call changObjDir;};
	};	
	if (_ctrlKey AND !_shift AND !_alt) then {
		if (_dikCode == 200) then {_handled = true;[1] call changObjHeight;};
		if (_dikCode == 208) then {_handled = true;[-1] call changObjHeight;};
		if (_dikCode == 203) then {_handled = true;[5] call changObjDir;};
		if (_dikCode == 205) then {_handled = true;[-5] call changObjDir;};
	};
    _handled;  
};
updateCombo = {
	disableSerialization;
	_display = findDisplay 665544;
	params ["_ctrl","_index","_num"];

	_nextControl = _display displayCtrl (_num + 1);
	_list = _display displayCtrl 100;
	lbClear _nextControl;
	lbClear _list;
	_data = _ctrl getVariable "models";
	_cti = _ctrl lbValue _index;
	_array = _data select _cti;
	_haveItems = false;
	{
		if (typeName _x == "STRING") then {
			if ((_x find ".p3d") != -1) then {_haveItems = true};
		};
	} forEach _array;
	_haveSubArrays = if (({typeName _x == "ARRAY"} count _array) != 0) then {true} else {false};
	
	if (_haveItems AND !_haveSubArrays) then {
		{
			_list lbAdd _x;
		} forEach _array;
		for "_i" from (_num + 1) to 1007 do {
			_c = _display displayCtrl _i;
			_c ctrlShow false;
			_c ctrlCommit 0;
		};
		call displayModel;
		curSelection = [];
		for "_i" from 1000 to 1006 do {
			_c = _display displayCtrl _i;
			if (ctrlShown _c) then {
				curSelection pushBack (lbCurSel _c);
			};
		};
		curSelection pushBack (lbCurSel _list);
	};
	
	if (_haveItems AND _haveSubArrays) then {
		{
			if (typeName _x == "STRING") then {
				if ((_x find ".p3d") != -1) then {
					_list lbAdd _x;
				} else {
					_cti = _nextControl lbAdd _x;
					_nextControl lbSetValue [_cti, (_forEachIndex + 1)];
				};
			};
		} forEach _array;
		_nextControl ctrlShow true;
		_nextControl ctrlCommit 0;
		_nextControl setVariable ["models",_array];
		_nextControl lbSetColor [lbCurSel _nextControl, [1,0,0,1]];
		call displayModel;
	};
	if (!_haveItems AND _haveSubArrays) then {
		{
			if (typeName _x == "STRING") then {
				_cti = _nextControl lbAdd _x;
				_nextControl lbSetValue [_cti, (_forEachIndex + 1)];
			};
		} forEach _array;
		_ctrl lbSetColor [lbCurSel _ctrl, [1,1,1,1]];
		_nextControl ctrlShow true;
		_nextControl ctrlCommit 0;
		_nextControl setVariable ["models",_array];
		_nextControl lbSetCurSel 0;
		_nextControl lbSetColor [lbCurSel _nextControl, [1,1,1,1]];
	};
};
displayModel = {
	disableSerialization;
	_display = findDisplay 665544;
	_list = _display displayCtrl 100;
	_model = _list lbText (lbCurSel _list);
	if (_model != "") then {
		if (!isNull obj) then {deleteVehicle obj};
		obj = createSimpleObject [_model,[1000,1000,heightOffset]];
		obj setDir dirOffset;
		obj setPosATL [1000,1000,heightOffset];
	};
	curSelection = [];
	for "_i" from 1000 to 1006 do {
		_c = _display displayCtrl _i;
		if (ctrlShown _c) then {
			curSelection pushBack (lbCurSel _c);
		};
	};
	curSelection pushBack (lbCurSel _list);
	_displayNameCtrl = _display displayCtrl 5002;
	_displayName = getText ((_model call findClassWithModel) >> "displayName");
	_displayNameCtrl ctrlSetText _displayName;
	if (_displayName == "") then {
		_p3d = ((_model splitString "\") select ((count (_model splitString "\")) - 1));
		_p3d = _p3d select [0, ((count _p3d) - 4)];
		_displayNameCtrl ctrlSetText _p3d;
	};
	_bbr = boundingBoxReal obj;
	_p1 = _bbr select 0;
	_p2 = _bbr select 1;
	_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
	_maxLength = abs ((_p2 select 1) - (_p1 select 1));
	_maxHeight = abs ((_p2 select 2) - (_p1 select 2));
	_volume = _maxWidth * _maxLength * _maxHeight * 1500;
	_volume = (round (_volume / 100)) * 100;
	
	(_display displayCtrl 5000) ctrlSetText (format ["%1", _volume]);
};
findClassWithModel = {
	params ["_model"];
	_return = configNull;
	_filter = format ["((toLower(getText (_x >> 'model'))) find (toLower '%1')) != -1",_model];
	_classes = _filter configClasses (Configfile >> "CfgVehicles");
	if (count _classes != 0) then {
		_return = (_classes select 0);
	};
	_return
};
exportAsContainer = {
	disableSerialization;
	_display = findDisplay 665544;
	_listCtrl = _display displayCtrl 100;
	_loadCtrl = _display displayCtrl 5000;
	_categoryCtrl = _display displayCtrl 5001;
	_displayNameCtrl = _display displayCtrl 5002;
	_text = "";
	_br = toString [10];
	_tab = toString [9];
	_model = _listCtrl lbText (lbCurSel _listCtrl);
	if (_model == "") exitWith {hintSilent "select model"};
	_subCat = _categoryCtrl lbText (lbCurSel _categoryCtrl);
	_arr = _model splitString "\";
	_p3d = (_arr select ((count _arr) - 1));
	_p3d = _p3d select [0, ((count _p3d) - 4)];
	if (_p3d in exportedContainers) exitWith {hintSilent "this container is already exported!"};
	if (isClass (configFile >> "CfgVehicles" >> (format ["acd_C_%1",_p3d]))) exitWith {hintSilent "this container is already configured!"};
	_displayName = getText ((_model call findClassWithModel) >> "displayName");
	if (_displayName == "") then {_displayName = _p3d};
	if ((ctrlText _displayNameCtrl) != "") then {_displayName = (ctrlText _displayNameCtrl)};
	_keepHor = cbChecked (_display displayCtrl 5010);
	_maxLoad = if ((ctrlText _loadCtrl) == "") then {5000} else {parseText (ctrlText _loadCtrl)};
 	_text = _tab + format ['class acd_nam_C_%1 : acd_nam_container_base {', _p3d];
	_text = _text + _br + _tab + _tab;
	//_ttt = toString((toArray _model) apply {if (_x == 92) then {124} else {_x}});
	_text = _text + format ['model = "%1";', _model];
	_text = _text + _br + _tab + _tab;	
	_text = _text + format ['displayName = "%1";', _displayName];
	_text = _text + _br + _tab + _tab;	
	if (_keepHor) then {
		_text = _text + "keepHorizontalPlacement = 1;";
		_text = _text + _br + _tab + _tab;	
	};
	_text = _text + format ['editorSubcategory = "%1";', _subCat];	
	_text = _text + _br + _tab + _tab;
	_text = _text + format ['maximumLoad = %1;', _maxLoad];
	_text = _text + _br + _tab;
	_text = _text + "};" + _br;
	
	_text = _text + _tab + format ['class acd_nam_C15k_%1 : acd_nam_container15k_base {', _p3d];
	_text = _text + _br + _tab + _tab;
	//_ttt = toString((toArray _model) apply {if (_x == 92) then {124} else {_x}});
	_text = _text + format ['model = "%1";', _model];
	_text = _text + _br + _tab + _tab;	
	_text = _text + format ['displayName = "%1 (15k load)";', _displayName];
	_text = _text + _br + _tab + _tab;
	if (_keepHor) then {
		_text = _text + "keepHorizontalPlacement = 1;";
		_text = _text + _br + _tab + _tab;	
	};
	_text = _text + format ['editorSubcategory = "%1";', _subCat];	
	_text = _text + _br + _tab;
	_text = _text + "};" + _br;
	
	copyToclipBoard _text;
	exportedContainers pushBack _p3d;
	FullTextContainers = FullTextContainers + _text;
	hintSilent format ["%1 exported to clipboard as container",_p3d];
	_listCtrl lbSetCurSel ((lbCurSel _listCtrl) + 1);
	ctrlSetFocus _listCtrl;
	call updateCount;
};
dumpAllToFile = {
	"make_file" callExtension format ["%1dump.txt|%2%3",pathToDumpFolder, FullTextContainers,FullTextDecor];
};
exportAsDecor = {
	disableSerialization;
	_display = findDisplay 665544;
	_listCtrl = _display displayCtrl 100;
	_loadCtrl = _display displayCtrl 5000;
	_categoryCtrl = _display displayCtrl 5001;
	_displayNameCtrl = _display displayCtrl 5002;
	_text = "";
	_br = toString [10];
	_tab = toString [9];
	_model = _listCtrl lbText (lbCurSel _listCtrl);
	if (_model == "") exitWith {hintSilent "select model"};
	_subCat = _categoryCtrl lbText (lbCurSel _categoryCtrl);
	_arr = _model splitString "\";
	_p3d = (_arr select ((count _arr) - 1));
	_p3d = _p3d select [0, ((count _p3d) - 4)];
	if (_p3d in exportedDecors) exitWith {hintSilent "this decoration is already exported!"};
	_displayName = getText ((_model call findClassWithModel) >> "displayName");
	if (isClass (configFile >> "CfgVehicles" >> (format ["acd_%1",_p3d]))) exitWith {hintSilent "this decoration is already configured!"};
	if (_displayName == "") then {_displayName = _p3d};
	if ((ctrlText _displayNameCtrl) != "") then {_displayName = (ctrlText _displayNameCtrl)};
	_keepHor = cbChecked (_display displayCtrl 5010);
	_maxLoad = if ((ctrlText _loadCtrl) == "") then {5000} else {parseText (ctrlText _loadCtrl)};
 	_text = _tab + format ['class acd_nam_%1 : acd_nam_decor_base {', _p3d];
	_text = _text + _br + _tab + _tab;
	//_ttt = toString((toArray _model) apply {if (_x == 92) then {124} else {_x}});
	_text = _text + format ['model = "%1";', _model];
	_text = _text + _br + _tab + _tab;	
	_text = _text + format ['displayName = "%1";', _displayName];
	_text = _text + _br + _tab + _tab;		
	if (_keepHor) then {
		_text = _text + "keepHorizontalPlacement = 1;";
		_text = _text + _br + _tab + _tab;	
	};
	_text = _text + format ['editorSubcategory = "%1";', _subCat];	
	_text = _text + _br + _tab;	
	_text = _text + "};" + _br;
	copyToclipBoard _text;
	FullTextDecor = FullTextDecor + _text;
	exportedDecors pushBack _p3d;
	hintSilent format ["%1 exported to clipboard as decor",_p3d];
	_listCtrl lbSetCurSel ((lbCurSel _listCtrl) + 1);
	ctrlSetFocus _listCtrl;
	call updateCount;
};
openModelMenu = {
	disableSerialization;
	if (!isNull (findDisplay 665544)) exitWith {};
	private ["_display","_pH","_pW","_ctrlGroup","_ctrlGroupMain","_ctrl","_sizeMultiplyer","_ctrlRedGroup","_ctrlBlueGroup","_indexRed","_indexBlue","_backgroundColor",
	"_makePictureControl","_makeSTextControl","_makeBackgroundControl","_makeFrameControl","_makePlayerControl"];
	createDialog "testDisp";
	_display = findDisplay 665544;
	_pH = pixelH * 5;
	_pW = pixelW * 5;
	_sizeMultiplyer = (1 / (getResolution select 5));
	ct_var_openedgui = true;
	_display displayAddEventHandler ["unload", "ct_var_openedgui = false"];
	
	_makeEdit = {
		params ["_parent","_idc","_position","_tooltip"];
		private ["_ctrl"];
		_ctrl = _display ctrlCreate ["RscEdit",_idc,_parent];
		_ctrl ctrlSetPosition _position;
		_ctrl ctrlEnable true;
		_ctrl ctrlSetBackgroundColor [0,0,0,0.8];
		_ctrl ctrlSetTooltip _tooltip;
		_ctrl ctrlCommit 0;
		_ctrl;
	};	
	_makeCB = {
		params ["_parent","_idc","_position","_tooltip"];
		private ["_ctrl"];
		_ctrl = _display ctrlCreate ["RscCheckBox",_idc,_parent];
		_ctrl ctrlSetPosition _position;
		_ctrl ctrlEnable true;
		_ctrl ctrlSetTooltip _tooltip;
		_ctrl ctrlCommit 0;
		_ctrl;
	};
	_makeCombo = {
		params ["_parent","_idc","_position","_actionOnSelChanged","_tooltip"];
		private ["_ctrl"];
		_ctrl = _display ctrlCreate ["RscCombo",_idc,_parent];
		_ctrl ctrlSetPosition _position;
		_ctrl ctrlSetEventHandler ["LBSelChanged",_actionOnSelChanged];
		_ctrl ctrlSetTooltip _tooltip;
		_ctrl ctrlEnable true;
		_ctrl ctrlCommit 0;
		_ctrl;
	};
	_makeButton = {
		params ["_parent","_idc","_position","_action","_text","_tooltip"];
		private ["_ctrl"];
		_ctrl = _display ctrlCreate ["RscButtonMenu",_idc,_parent];
		_ctrl ctrlSetPosition _position;
		_ctrl ctrlSetText _text;
		_ctrl ctrlSetEventHandler ["ButtonClick",_action];
		_ctrl ctrlSetTooltip _tooltip;
		_ctrl ctrlCommit 0;
		_ctrl;
	};
	_ctrlGroupMain = _display ctrlCreate ["RscControlsGroupNoScrollbars", -1];
	_ctrlGroupMain ctrlSetPosition [safeZoneX, safeZoneY, 160*_pW, 73*_pH];
	_ctrlGroupMain ctrlCommit 0;

	_firstCombo = [_ctrlGroupMain, 1000, [5*_pW,5*_pH,60*_pW,8*_pH], "[_this select 0, _this select 1, 1000] call updateCombo", ""] call _makeCombo;
	[_ctrlGroupMain, 1001, [5*_pW,15*_pH,60*_pW,8*_pH], "[_this select 0, _this select 1, 1001] spawn updateCombo", ""] call _makeCombo;
	[_ctrlGroupMain, 1002, [5*_pW,25*_pH,60*_pW,8*_pH], "[_this select 0, _this select 1, 1002] spawn updateCombo", ""] call _makeCombo;
	[_ctrlGroupMain, 1003, [5*_pW,35*_pH,60*_pW,8*_pH], "[_this select 0, _this select 1, 1003] spawn updateCombo", ""] call _makeCombo;
	[_ctrlGroupMain, 1004, [5*_pW,45*_pH,60*_pW,8*_pH], "[_this select 0, _this select 1, 1004] spawn updateCombo", ""] call _makeCombo;
	[_ctrlGroupMain, 1005, [5*_pW,55*_pH,60*_pW,8*_pH], "[_this select 0, _this select 1, 1005] spawn updateCombo", ""] call _makeCombo;
	[_ctrlGroupMain, 1006, [5*_pW,65*_pH,60*_pW,8*_pH], "[_this select 0, _this select 1, 1006] spawn updateCombo", ""] call _makeCombo;
	
	[_ctrlGroupMain,2000,[70*_pW,5*_pH,60*_pW,8*_pH],"call exportAsContainer","export container",""] call _makeButton;
	[_ctrlGroupMain,2001,[70*_pW,15*_pH,60*_pW,8*_pH],"call exportAsDecor","export decoration",""] call _makeButton;
	[_ctrlGroupMain,2003,[135*_pW,5*_pH,20*_pW,20*_pH],"call dumpAllToFile","DUMP TO FILE",""] call _makeButton;
	[_ctrlGroupMain,2005,[135*_pW,30*_pH,20*_pW,10*_pH],"call clearTexts","CLEAR","Delete all current dump texts"] call _makeButton;
	
	_ctrl = [_ctrlGroupMain, 5001, [70*_pW,25*_pH,60*_pW,8*_pH], "curCategory = lbCurSel (_this select 0)", "3DEN editor subcategory"] call _makeCombo;
	{_ctrl lbAdd _x} forEach containerSubCategories;
	{_ctrl lbAdd _x} forEach decorationSubCategories;
	_ctrl lbSetCurSel curCategory;
	[_ctrlGroupMain,5003,[70*_pW,35*_pH,45*_pW,8*_pH],""] call _makeEdit;
	[_ctrlGroupMain,2004,[115*_pW,35*_pH,15*_pW,8*_pH],"call addNewCategory","Make","Add new subcategory"] call _makeButton;
	
	_ctrl = [_ctrlGroupMain,5000,[70*_pW,45*_pH,60*_pW,8*_pH],"maximum load (see config.sqf for examples)"] call _makeEdit;
	_ctrl ctrlSetText "2000";
	[_ctrlGroupMain,5002,[70*_pW,55*_pH,60*_pW,8*_pH],"display name"] call _makeEdit;
	
	[_ctrlGroupMain,5005,[70*_pW,65*_pH,30*_pW,8*_pH],"Current number of chars (8000 max)"] call _makeEdit;
	[_ctrlGroupMain,5010,[100*_pW,65*_pH,8*_pW,8*_pH],"Keep horizontal placement"] call _makeCB;
	
	for "_i" from 0 to ((count modelsTree) - 1) step 2 do {
		_index = _firstCombo lbAdd (modelsTree select _i);
		_firstCombo lbSetValue [_index, (_i + 1)];
	};
	_firstCombo setVariable ["models",modelsTree];
	if (count curSelection == 0) then {
		_firstCombo lbSetCurSel 0;
	} else {
		[] spawn {
			disableSerialization;
			_display = findDisplay 665544;
			_sel =+ curSelection;
			_last = _sel deleteAt ((count _sel) - 1);
			{
				_c = _display displayCtrl (1000 + _forEachindex);
				_c lbSetCurSel _x;
				sleep 0.01;
			} forEach _sel;
			sleep 0.01;
			_list = _display displayCtrl 100;
			_list lbSetCurSel _last;
		};
	};

	_list = _display displayCtrl 100;
	_list ctrlSetEventHandler ["LBSelChanged","0 call displayModel"];
	call updateCount;
};
addNewCategory = {
	disableSerialization;
	_display = findDisplay 665544;
	_text = ctrlText (_display displayCtrl 5003);
	(_display displayCtrl 5001) lbAdd _text;
	decorationSubCategories pushBack _text;
};
updateCount = {
	disableSerialization;
	_display = findDisplay 665544;
	_counter = _display displayCtrl 5005;
	_counter ctrlSetText (format ["%1", (count FullTextDecor) + (count FullTextContainers)]);
};
clearTexts = {
	FullTextDecor = "";
	FullTextContainers = "";
	exportedContainers = [];
	exportedDecors = [];
	call updateCount;
};
makeModelTree = {
	modelsTree = [];
	_lookForArray = {
		params ["_key","_array"];
		private ["_target","_index"];
		_target = "";
		_index = _array find _key;
		if (_index == -1) then {
			_array pushBack _key;
			_index = _array pushBack [];
			_target = _array select _index;
		} else {
			_target = _array select (_index + 1);
		};
		_target
	};
	private ["_stringSplit","_currentLayer","_key","_layerIndex","_nextLayer"];
	{
		_fullString = _x;
		_stringSplit = _x splitString "\";
		_currentLayer = [];
		{
			_key = _x;
			_layerIndex = _forEachIndex;
			if ((_key find ".p3d") == -1) then {
				if (_layerIndex == 0) then {
					_currentLayer = [_key,modelsTree] call _lookForArray;
				};
				if (_layerIndex != 0) then {
					_currentLayer = [_key,_currentLayer] call _lookForArray;
				};
			} else {
				_currentLayer pushBack _fullString;
			};
		} forEach _stringSplit;
	} forEach AllModels;
};