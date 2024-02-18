function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "untitled:32"};
	this.sidHashMap["untitled:32"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "untitled:35"};
	this.sidHashMap["untitled:35"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Bitwise AND"] = {sid: "untitled:10"};
	this.sidHashMap["untitled:10"] = {rtwname: "<Root>/Bitwise AND"};
	this.rtwnameHashMap["<Root>/Bitwise AND1"] = {sid: "untitled:11"};
	this.sidHashMap["untitled:11"] = {rtwname: "<Root>/Bitwise AND1"};
	this.rtwnameHashMap["<Root>/Bitwise AND2"] = {sid: "untitled:14"};
	this.sidHashMap["untitled:14"] = {rtwname: "<Root>/Bitwise AND2"};
	this.rtwnameHashMap["<Root>/Bitwise AND3"] = {sid: "untitled:17"};
	this.sidHashMap["untitled:17"] = {rtwname: "<Root>/Bitwise AND3"};
	this.rtwnameHashMap["<Root>/Bitwise AND4"] = {sid: "untitled:20"};
	this.sidHashMap["untitled:20"] = {rtwname: "<Root>/Bitwise AND4"};
	this.rtwnameHashMap["<Root>/Bitwise NOT"] = {sid: "untitled:1"};
	this.sidHashMap["untitled:1"] = {rtwname: "<Root>/Bitwise NOT"};
	this.rtwnameHashMap["<Root>/Bitwise NOT1"] = {sid: "untitled:36"};
	this.sidHashMap["untitled:36"] = {rtwname: "<Root>/Bitwise NOT1"};
	this.rtwnameHashMap["<Root>/From"] = {sid: "untitled:5"};
	this.sidHashMap["untitled:5"] = {rtwname: "<Root>/From"};
	this.rtwnameHashMap["<Root>/From1"] = {sid: "untitled:8"};
	this.sidHashMap["untitled:8"] = {rtwname: "<Root>/From1"};
	this.rtwnameHashMap["<Root>/From10"] = {sid: "untitled:31"};
	this.sidHashMap["untitled:31"] = {rtwname: "<Root>/From10"};
	this.rtwnameHashMap["<Root>/From11"] = {sid: "untitled:38"};
	this.sidHashMap["untitled:38"] = {rtwname: "<Root>/From11"};
	this.rtwnameHashMap["<Root>/From2"] = {sid: "untitled:13"};
	this.sidHashMap["untitled:13"] = {rtwname: "<Root>/From2"};
	this.rtwnameHashMap["<Root>/From3"] = {sid: "untitled:16"};
	this.sidHashMap["untitled:16"] = {rtwname: "<Root>/From3"};
	this.rtwnameHashMap["<Root>/From4"] = {sid: "untitled:19"};
	this.sidHashMap["untitled:19"] = {rtwname: "<Root>/From4"};
	this.rtwnameHashMap["<Root>/From5"] = {sid: "untitled:22"};
	this.sidHashMap["untitled:22"] = {rtwname: "<Root>/From5"};
	this.rtwnameHashMap["<Root>/From6"] = {sid: "untitled:25"};
	this.sidHashMap["untitled:25"] = {rtwname: "<Root>/From6"};
	this.rtwnameHashMap["<Root>/From7"] = {sid: "untitled:28"};
	this.sidHashMap["untitled:28"] = {rtwname: "<Root>/From7"};
	this.rtwnameHashMap["<Root>/From8"] = {sid: "untitled:29"};
	this.sidHashMap["untitled:29"] = {rtwname: "<Root>/From8"};
	this.rtwnameHashMap["<Root>/From9"] = {sid: "untitled:30"};
	this.sidHashMap["untitled:30"] = {rtwname: "<Root>/From9"};
	this.rtwnameHashMap["<Root>/Goto"] = {sid: "untitled:3"};
	this.sidHashMap["untitled:3"] = {rtwname: "<Root>/Goto"};
	this.rtwnameHashMap["<Root>/Goto1"] = {sid: "untitled:24"};
	this.sidHashMap["untitled:24"] = {rtwname: "<Root>/Goto1"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "untitled:34"};
	this.sidHashMap["untitled:34"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<Root>/Output1"] = {sid: "untitled:39"};
	this.sidHashMap["untitled:39"] = {rtwname: "<Root>/Output1"};
	this.rtwnameHashMap["<Root>/Output2"] = {sid: "untitled:40"};
	this.sidHashMap["untitled:40"] = {rtwname: "<Root>/Output2"};
	this.rtwnameHashMap["<Root>/Output3"] = {sid: "untitled:41"};
	this.sidHashMap["untitled:41"] = {rtwname: "<Root>/Output3"};
	this.rtwnameHashMap["<Root>/Output4"] = {sid: "untitled:42"};
	this.sidHashMap["untitled:42"] = {rtwname: "<Root>/Output4"};
	this.rtwnameHashMap["<Root>/Output5"] = {sid: "untitled:43"};
	this.sidHashMap["untitled:43"] = {rtwname: "<Root>/Output5"};
	this.rtwnameHashMap["<Root>/Output6"] = {sid: "untitled:44"};
	this.sidHashMap["untitled:44"] = {rtwname: "<Root>/Output6"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();