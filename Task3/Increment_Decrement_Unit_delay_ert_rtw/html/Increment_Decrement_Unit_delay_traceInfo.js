function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Increment_Decrement_Unit_delay"};
	this.sidHashMap["Increment_Decrement_Unit_delay"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "Increment_Decrement_Unit_delay:11"};
	this.sidHashMap["Increment_Decrement_Unit_delay:11"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "Increment_Decrement_Unit_delay:12"};
	this.sidHashMap["Increment_Decrement_Unit_delay:12"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "Increment_Decrement_Unit_delay:2"};
	this.sidHashMap["Increment_Decrement_Unit_delay:2"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Add1"] = {sid: "Increment_Decrement_Unit_delay:7"};
	this.sidHashMap["Increment_Decrement_Unit_delay:7"] = {rtwname: "<Root>/Add1"};
	this.rtwnameHashMap["<Root>/Unit Delay"] = {sid: "Increment_Decrement_Unit_delay:5"};
	this.sidHashMap["Increment_Decrement_Unit_delay:5"] = {rtwname: "<Root>/Unit Delay"};
	this.rtwnameHashMap["<Root>/Unit Delay1"] = {sid: "Increment_Decrement_Unit_delay:10"};
	this.sidHashMap["Increment_Decrement_Unit_delay:10"] = {rtwname: "<Root>/Unit Delay1"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "Increment_Decrement_Unit_delay:13"};
	this.sidHashMap["Increment_Decrement_Unit_delay:13"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<Root>/Output1"] = {sid: "Increment_Decrement_Unit_delay:14"};
	this.sidHashMap["Increment_Decrement_Unit_delay:14"] = {rtwname: "<Root>/Output1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
