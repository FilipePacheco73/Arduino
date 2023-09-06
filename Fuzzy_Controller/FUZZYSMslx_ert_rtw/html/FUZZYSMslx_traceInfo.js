function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Analog Input */
	this.urlHashMap["FUZZYSMslx:22"] = "FUZZYSMslx.c:41,57,84,200&FUZZYSMslx.h:97&FUZZYSMslx_data.c:22";
	/* <Root>/Analog Input1 */
	this.urlHashMap["FUZZYSMslx:23"] = "FUZZYSMslx.c:44,58,85,203&FUZZYSMslx.h:100&FUZZYSMslx_data.c:25";
	/* <Root>/Analog Input2 */
	this.urlHashMap["FUZZYSMslx:24"] = "FUZZYSMslx.c:47,59,86,206&FUZZYSMslx.h:103&FUZZYSMslx_data.c:28";
	/* <Root>/Analog Input3 */
	this.urlHashMap["FUZZYSMslx:25"] = "FUZZYSMslx.c:50,60,87,209&FUZZYSMslx.h:106&FUZZYSMslx_data.c:31";
	/* <Root>/Analog Input4 */
	this.urlHashMap["FUZZYSMslx:26"] = "FUZZYSMslx.c:53,61,88,212&FUZZYSMslx.h:109&FUZZYSMslx_data.c:34";
	/* <Root>/Memory */
	this.urlHashMap["FUZZYSMslx:38"] = "FUZZYSMslx.c:82,105,110,215,220&FUZZYSMslx.h:91,112&FUZZYSMslx_data.c:37";
	/* <Root>/MinMax */
	this.urlHashMap["FUZZYSMslx:39"] = "FUZZYSMslx.c:56,83";
	/* <Root>/Scope */
	this.urlHashMap["FUZZYSMslx:9"] = "FUZZYSMslx.h:85";
	/* <Root>/Scope1 */
	this.urlHashMap["FUZZYSMslx:27"] = "FUZZYSMslx.h:89";
	/* <Root>/Switch */
	this.urlHashMap["FUZZYSMslx:37"] = "FUZZYSMslx.c:81,104&FUZZYSMslx.h:78,115&FUZZYSMslx_data.c:40";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "FUZZYSMslx"};
	this.sidHashMap["FUZZYSMslx"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "FUZZYSMslx:28"};
	this.sidHashMap["FUZZYSMslx:28"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "FUZZYSMslx:28:9"};
	this.sidHashMap["FUZZYSMslx:28:9"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/Analog Input"] = {sid: "FUZZYSMslx:22"};
	this.sidHashMap["FUZZYSMslx:22"] = {rtwname: "<Root>/Analog Input"};
	this.rtwnameHashMap["<Root>/Analog Input1"] = {sid: "FUZZYSMslx:23"};
	this.sidHashMap["FUZZYSMslx:23"] = {rtwname: "<Root>/Analog Input1"};
	this.rtwnameHashMap["<Root>/Analog Input2"] = {sid: "FUZZYSMslx:24"};
	this.sidHashMap["FUZZYSMslx:24"] = {rtwname: "<Root>/Analog Input2"};
	this.rtwnameHashMap["<Root>/Analog Input3"] = {sid: "FUZZYSMslx:25"};
	this.sidHashMap["FUZZYSMslx:25"] = {rtwname: "<Root>/Analog Input3"};
	this.rtwnameHashMap["<Root>/Analog Input4"] = {sid: "FUZZYSMslx:26"};
	this.sidHashMap["FUZZYSMslx:26"] = {rtwname: "<Root>/Analog Input4"};
	this.rtwnameHashMap["<Root>/Demux"] = {sid: "FUZZYSMslx:8"};
	this.sidHashMap["FUZZYSMslx:8"] = {rtwname: "<Root>/Demux"};
	this.rtwnameHashMap["<Root>/Fuzzy Logic  Controller"] = {sid: "FUZZYSMslx:28"};
	this.sidHashMap["FUZZYSMslx:28"] = {rtwname: "<Root>/Fuzzy Logic  Controller"};
	this.rtwnameHashMap["<Root>/Memory"] = {sid: "FUZZYSMslx:38"};
	this.sidHashMap["FUZZYSMslx:38"] = {rtwname: "<Root>/Memory"};
	this.rtwnameHashMap["<Root>/MinMax"] = {sid: "FUZZYSMslx:39"};
	this.sidHashMap["FUZZYSMslx:39"] = {rtwname: "<Root>/MinMax"};
	this.rtwnameHashMap["<Root>/Mux1"] = {sid: "FUZZYSMslx:30"};
	this.sidHashMap["FUZZYSMslx:30"] = {rtwname: "<Root>/Mux1"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "FUZZYSMslx:9"};
	this.sidHashMap["FUZZYSMslx:9"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Scope1"] = {sid: "FUZZYSMslx:27"};
	this.sidHashMap["FUZZYSMslx:27"] = {rtwname: "<Root>/Scope1"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "FUZZYSMslx:37"};
	this.sidHashMap["FUZZYSMslx:37"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "FUZZYSMslx:28:1"};
	this.sidHashMap["FUZZYSMslx:28:1"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/FIS Wizard"] = {sid: "FUZZYSMslx:28:9"};
	this.sidHashMap["FUZZYSMslx:28:9"] = {rtwname: "<S1>/FIS Wizard"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "FUZZYSMslx:28:3"};
	this.sidHashMap["FUZZYSMslx:28:3"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "FUZZYSMslx:28:9:1"};
	this.sidHashMap["FUZZYSMslx:28:9:1"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "FUZZYSMslx:28:9:2"};
	this.sidHashMap["FUZZYSMslx:28:9:2"] = {rtwname: "<S2>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
