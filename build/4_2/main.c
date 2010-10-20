/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY192208 TY192208;
typedef struct TY192206 TY192206;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY55547 TY55547;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11190 TY11190;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
typedef struct TY43019 TY43019;
typedef struct TY43013 TY43013;
typedef struct TY38715 TY38715;
typedef struct TY55525 TY55525;
typedef struct TY92031 TY92031;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TY55551 TY55551;
typedef struct TY54011 TY54011;
typedef struct TY47532 TY47532;
typedef struct TY55529 TY55529;
typedef struct TY55527 TY55527;
typedef struct TY55539 TY55539;
typedef struct TY52008 TY52008;
typedef struct TY55543 TY55543;
typedef struct TY74013 TY74013;
typedef struct TY104006 TY104006;
typedef struct TY104002 TY104002;
typedef struct TY76267 TY76267;
typedef struct TY75015 TY75015;
typedef struct TY76281 TY76281;
typedef struct TY76263 TY76263;
typedef struct TY55519 TY55519;
typedef struct TY39422 TY39422;
typedef struct TY92029 TY92029;
typedef struct TY59223 TY59223;
typedef struct TY59221 TY59221;
typedef struct TY59219 TY59219;
typedef struct TY55563 TY55563;
typedef struct TY55561 TY55561;
typedef struct TY55559 TY55559;
typedef struct TY55549 TY55549;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY192206 {
NimStringDesc* Filename;
TY55547* Module;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY10802 {
NI Refcount;
TNimType* Typ;
};
struct TY10818 {
NI Len;
NI Cap;
TY10802** D;
};
struct TY10814 {
NI Counter;
NI Max;
TY10810* Head;
TY10810** Data;
};
struct TY11188 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11190 {
TY10818 Zct;
TY10818 Decstack;
TY10814 Cycleroots;
TY10818 Tempstack;
NI Cyclerootslock;
NI Zctlock;
TY11188 Stat;
};
struct TY43019 {
TNimType* m_type;
TY43013* Head;
TY43013* Tail;
NI Counter;
};
struct TY38715 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef N_NIMCALL_PTR(TY55525*, TY104048) (NimStringDesc* Filename_104049);
typedef N_NIMCALL_PTR(TY55547*, TY104044) (NimStringDesc* Filename_104045);
struct TNimObject {
TNimType* m_type;
};
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY47532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY55529 {
TNimType* m_type;
NI Counter;
TY55527* Data;
};
struct TY55539 {
NU8 K;
NU8 S;
NU8 Flags;
TY55551* T;
TY52008* R;
NI A;
};
struct TY55547 {
  TY54005 Sup;
NU8 Kind;
NU8 Magic;
TY55551* Typ;
TY54011* Name;
TY47532 Info;
TY55547* Owner;
NU32 Flags;
TY55529 Tab;
TY55525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY55539 Loc;
TY55543* Annex;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
typedef N_NIMCALL_PTR(TY104002*, TY104007) (TY55547* Module_104008, NimStringDesc* Filename_104009);
typedef N_NIMCALL_PTR(TY104002*, TY104012) (TY55547* Module_104013, NimStringDesc* Filename_104014, TY92031* Rd_104015);
typedef N_NIMCALL_PTR(TY55525*, TY104018) (TY104002* P_104019, TY55525* N_104020);
typedef N_NIMCALL_PTR(TY55525*, TY104023) (TY104002* P_104024, TY55525* Toplevelstmt_104025);
struct TY104006 {
TY104007 Open;
TY104012 Opencached;
TY104018 Close;
TY104023 Process;
};
struct TY75015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY74013* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY76267 {
  TY75015 Sup;
NimStringDesc* Filename;
TY76281* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY76263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY54011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY76263* Next;
};
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY55525 {
TY55551* Typ;
NimStringDesc* Comment;
TY47532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY55547* Sym;
} S4;
struct {TY54011* Ident;
} S5;
struct {TY55519* Sons;
} S6;
} KindU;
};
struct TY59219 {
NI Key;
NI Val;
};
struct TY59223 {
NI Counter;
TY59221* Data;
};
struct TY92029 {
NI Lastidxkey;
NI Lastidxval;
TY59223 Tab;
TY52008* R;
NI Offset;
};
struct TY55559 {
TY54005* Key;
TNimObject* Val;
};
struct TY55563 {
NI Counter;
TY55561* Data;
};
struct TY92031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY39422* Moddeps;
TY39422* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY92029 Index;
TY92029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY55563 Syms;
};
struct TY55551 {
  TY54005 Sup;
NU8 Kind;
TY55549* Sons;
TY55525* N;
NU8 Flags;
NU8 Callconv;
TY55547* Owner;
TY55547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY55539 Loc;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY55543 {
  TY43013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY52008* Name;
TY55525* Path;
};
struct TY74013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY104002 {
  TNimObject Sup;
};
struct TY192208 {
  TGenericSeq Sup;
  TY192206 data[SEQ_DECL_SIZE];
};
struct TY55527 {
  TGenericSeq Sup;
  TY55547* data[SEQ_DECL_SIZE];
};
struct TY76281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY55519 {
  TGenericSeq Sup;
  TY55525* data[SEQ_DECL_SIZE];
};
struct TY39422 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY59221 {
  TGenericSeq Sup;
  TY59219 data[SEQ_DECL_SIZE];
};
struct TY55561 {
  TGenericSeq Sup;
  TY55559 data[SEQ_DECL_SIZE];
};
struct TY55549 {
  TGenericSeq Sup;
  TY55551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(void, Appendstr_43061)(TY43019* List_43064, NimStringDesc* Data_43065);
N_NIMCALL(void, Prependstr_43071)(TY43019* List_43074, NimStringDesc* Data_43075);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_38714, TY38715* Result);
N_NIMCALL(void, Setid_55695)(NI Id_55697);
N_NIMCALL(TY55525*, Parsefile_91031)(NimStringDesc* Filename_91033);
N_NIMCALL(TY55547*, Importmodule_192327)(NimStringDesc* Filename_192329);
N_NIMCALL(TY55547*, Getmodule_192256)(NimStringDesc* Filename_192258);
N_NIMCALL(NIM_BOOL, nossameFile)(NimStringDesc* Path1_39070, NimStringDesc* Path2_39071);
N_NIMCALL(TY55547*, Compilemodule_192322)(NimStringDesc* Filename_192324, NIM_BOOL Ismainfile_192325, NIM_BOOL Issystemfile_192326);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_39044, NimStringDesc* Ext_39045);
N_NIMCALL(TY55547*, Newmodule_192289)(NimStringDesc* Filename_192291);
N_NIMCALL(void*, newObj)(TNimType* Typ_13707, NI Size_13708);
N_NIMCALL(void, objectInit)(void* Dest_19662, TNimType* Typ_19663);
N_NIMCALL(TY54011*, Getident_54016)(NimStringDesc* Identifier_54018);
N_NIMCALL(NIM_BOOL, Isnimrodidentifier_76357)(NimStringDesc* S_76359);
N_NIMCALL(void, Rawmessage_47553)(NU8 Msg_47555, NimStringDesc* Arg_47556);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11074)(TY10814* S_11077, TY10802* Cell_11078);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
N_NIMCALL(TY47532, Newlineinfo_47574)(NimStringDesc* Filename_47576, NI Line_47577, NI Col_47578);
N_NIMCALL(void, Initstrtable_55746)(TY55529* X_55749);
N_NIMCALL(void, Registermodule_192229)(NimStringDesc* Filename_192231, TY55547* Module_192232);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_19003, NI Elemsize_19004, NI Newlen_19005);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
N_NIMCALL(void, Strtableadd_59064)(TY55529* T_59067, TY55547* N_59068);
N_NIMCALL(TY92031*, Handlesymbolfile_92060)(TY55547* Module_92062, NimStringDesc* Filename_92063);
N_NIMCALL(void, Internalerror_47571)(NimStringDesc* Errmsg_47573);
N_NIMCALL(NI, Getid_55693)(void);
N_NIMCALL(void, Processmodule_104035)(TY55547* Module_104037, NimStringDesc* Filename_104038, TY74013* Stream_104039, TY92031* Rd_104040);
N_NIMCALL(void, Limessage_47562)(TY47532 Info_47564, NU8 Msg_47565, NimStringDesc* Arg_47566);
N_NIMCALL(NU8, Whichkeyword_71468)(NimStringDesc* Id_71470);
N_NIMCALL(void, Wantfile_192713)(NimStringDesc* Filename_192715);
N_NIMCALL(void, Commandcompiletoc_192436)(NimStringDesc* Filename_192438);
N_NIMCALL(void, Semanticpasses_192408)(void);
N_NIMCALL(void, Registerpass_104028)(TY104006* P_104030);
N_NIMCALL(TY104006, Verbosepass_186004)(void);
N_NIMCALL(TY104006, Sempass_124001)(void);
N_NIMCALL(TY104006, Transfpass_188005)(void);
N_NIMCALL(TY104006, Cgenpass_159201)(void);
N_NIMCALL(TY104006, Rodwritepass_110001)(void);
N_NIMCALL(void, Compileproject_192405)(NimStringDesc* Filename_192407);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_38403, NimStringDesc* Tail_38404);
N_NIMCALL(void, Callccompiler_69370)(NimStringDesc* Projectfile_69372);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_39020, NimStringDesc* Ext_39021);
N_NIMCALL(void, Commandcompiletoecmascript_192601)(NimStringDesc* Filename_192603);
N_NIMCALL(void, Settarget_51574)(NU8 O_51576, NU8 C_51577);
N_NIMCALL(void, Initdefines_63049)(void);
N_NIMCALL(TY104006, Ecmasgenpass_178004)(void);
N_NIMCALL(void, Commandpretty_192643)(NimStringDesc* Filename_192645);
N_NIMCALL(void, Rendermodule_84035)(TY55525* N_84037, NimStringDesc* Filename_84038, NU8 Renderflags_84041);
N_NIMCALL(NimStringDesc*, Getoutfile_46143)(NimStringDesc* Filename_46145, NimStringDesc* Ext_46146);
N_NIMCALL(void, Loadspecialconfig_79007)(NimStringDesc* Configfilename_79009);
N_NIMCALL(void, Commanddoc_154001)(NimStringDesc* Filename_154003);
N_NIMCALL(void, Commandrst2html_154004)(NimStringDesc* Filename_154006);
N_NIMCALL(void, Commandrst2tex_154007)(NimStringDesc* Filename_154009);
N_NIMCALL(void, Commandgendepend_192410)(NimStringDesc* Filename_192412);
N_NIMCALL(TY104006, Gendependpass_187004)(void);
N_NIMCALL(TY104006, Cleanuppass_186006)(void);
N_NIMCALL(void, Generatedot_187006)(NimStringDesc* Project_187008);
N_NIMCALL(void, Execexternalprogram_69373)(NimStringDesc* Cmd_69375);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18809, NIM_CHAR C_18810);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18687);
N_NIMCALL(void, Listsymbols_63062)(void);
N_NIMCALL(void, Commandcheck_192433)(NimStringDesc* Filename_192435);
N_NIMCALL(void, Commandscan_192666)(NimStringDesc* Filename_192668);
N_NIMCALL(TY74013*, Llstreamopen_74032)(NimStringDesc* Filename_74034, NU8 Mode_74035);
N_NIMCALL(void, Openlexer_76298)(TY76267* Lex_76301, NimStringDesc* Filename_76302, TY74013* Inputstream_76303);
N_NIMCALL(void, Rawgettok_76304)(TY76267* L_76307, TY76263* Tok_76309);
N_NIMCALL(void, Printtok_76320)(TY76263* Tok_76322);
N_NIMCALL(void, Closelexer_76316)(TY76267* Lex_76319);
N_NIMCALL(void, Messageout_47550)(NimStringDesc* S_47552);
N_NIMCALL(void, Commandinteractive_192616)(void);
N_NIMCALL(TY104006, Evalpass_114046)(void);
N_NIMCALL(TY74013*, Llstreamopenstdin_74038)(void);
STRING_LITERAL(TMP196869, "nim", 3);
STRING_LITERAL(TMP196922, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP196924, "command line", 12);
STRING_LITERAL(TMP196925, "", 0);
STRING_LITERAL(TMP197869, "system", 6);
STRING_LITERAL(TMP198089, "pretty.nim", 10);
STRING_LITERAL(TMP198090, "nimdoc.cfg", 10);
STRING_LITERAL(TMP198478, "nimdoc.tex.cfg", 14);
STRING_LITERAL(TMP198486, "dot -Tpng -o", 12);
STRING_LITERAL(TMP198487, "png", 3);
STRING_LITERAL(TMP198488, "dot", 3);
STRING_LITERAL(TMP198490, "Beware: Indentation tokens depend on the parser\'s state!", 56);
STRING_LITERAL(TMP198491, "stdin", 5);
TY192208* Compmods_192227;
extern TNimType* NTI192208; /* TFileModuleMap */
extern TY11190 Gch_11210;
extern TY43019 Searchpaths_46079;
extern NimStringDesc* Libpath_46110;
extern TY104048 Gincludefile_104051;
extern TY104044 Gimportmodule_104047;
extern TNimType* NTI55523; /* PSym */
extern TNimType* NTI55547; /* TSym */
extern NU8 Gcmd_46082;
extern NU32 Gglobaloptions_46077;
extern TNimType* NTI76267; /* TLexer */
extern TNimType* NTI76261; /* PToken */
extern TNimType* NTI76263; /* TToken */
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI64)((NU64)(((NI) (Usr_11614))) - (NU64)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
}
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7607;
Result_7607 = 0;
(*Memloc_3004) += X_3005;
Result_7607 = (*Memloc_3004);
return Result_7607;
}
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010) {
NI Result_7806;
Result_7806 = 0;
(*Memloc_3009) -= X_3010;
Result_7806 = (*Memloc_3009);
return Result_7806;
}
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603) {
Addzct_11601(&Gch_11210.Zct, C_12603);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219) {
TY10802* C_13220;
NI LOC4;
TY10802* C_13222;
NI LOC9;
if (!!((Src_13219 == NIM_NIL))) goto LA2;
C_13220 = 0;
C_13220 = Usrtocell_11612(Src_13219);
LOC4 = Atomicinc_3001(&(*C_13220).Refcount, 8);
LA2: ;
if (!!(((*Dest_13218) == NIM_NIL))) goto LA6;
C_13222 = 0;
C_13222 = Usrtocell_11612((*Dest_13218));
LOC9 = Atomicdec_3006(&(*C_13222).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12601(C_13222);
LA10: ;
LA6: ;
(*Dest_13218) = Src_13219;
}
N_NIMCALL(TY55547*, Getmodule_192256)(NimStringDesc* Filename_192258) {
TY55547* Result_192259;
NI I_192282;
NI HEX3Atmp_192284;
NI Res_192286;
NIM_BOOL LOC3;
Result_192259 = 0;
I_192282 = 0;
HEX3Atmp_192284 = 0;
HEX3Atmp_192284 = (Compmods_192227->Sup.len-1);
Res_192286 = 0;
Res_192286 = 0;
while (1) {
if (!(Res_192286 <= HEX3Atmp_192284)) goto LA1;
I_192282 = Res_192286;
LOC3 = nossameFile(Compmods_192227->data[I_192282].Filename, Filename_192258);
if (!LOC3) goto LA4;
Result_192259 = Compmods_192227->data[I_192282].Module;
goto BeforeRet;
LA4: ;
Res_192286 += 1;
} LA1: ;
BeforeRet: ;
return Result_192259;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618) {
NIM_BOOL Result_11619;
Result_11619 = 0;
Result_11619 = !((((*(*C_11618).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11619;
}
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254) {
Incl_11074(&Gch_11210.Cycleroots, C_12254);
}
static N_INLINE(void, Incref_13202)(TY10802* C_13204) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3001(&(*C_13204).Refcount, 8);
LOC3 = Canbecycleroot_11616(C_13204);
if (!LOC3) goto LA4;
Rtladdcycleroot_12252(C_13204);
LA4: ;
}
static N_INLINE(void, Decref_13001)(TY10802* C_13003) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3006(&(*C_13003).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
Rtladdzct_12601(C_13003);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11616(C_13003);
if (!LOC5) goto LA6;
Rtladdcycleroot_12252(C_13003);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215) {
TY10802* LOC4;
TY10802* LOC8;
if (!!((Src_13215 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11612(Src_13215);
Incref_13202(LOC4);
LA2: ;
if (!!(((*Dest_13214) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11612((*Dest_13214));
Decref_13001(LOC8);
LA6: ;
(*Dest_13214) = Src_13215;
}
N_NIMCALL(void, Registermodule_192229)(NimStringDesc* Filename_192231, TY55547* Module_192232) {
NI Length_192243;
Length_192243 = 0;
Length_192243 = Compmods_192227->Sup.len;
Compmods_192227 = (TY192208*) setLengthSeq(&(Compmods_192227)->Sup, sizeof(TY192206), (NI64)(Length_192243 + 1));
asgnRefNoCycle((void**) &Compmods_192227->data[Length_192243].Filename, copyString(Filename_192231));
asgnRef((void**) &Compmods_192227->data[Length_192243].Module, Module_192232);
}
N_NIMCALL(TY55547*, Newmodule_192289)(NimStringDesc* Filename_192291) {
TY55547* Result_192292;
TY38715 LOC1;
NIM_BOOL LOC3;
Result_192292 = 0;
Result_192292 = (TY55547*) newObj(NTI55523, sizeof(TY55547));
objectInit(Result_192292, NTI55547);
(*Result_192292).Sup.Id = -1;
(*Result_192292).Kind = ((NU8) 18);
memset((void*)&LOC1, 0, sizeof(LOC1));
nossplitFile(Filename_192291, &LOC1);
asgnRefNoCycle((void**) &(*Result_192292).Name, Getident_54016(LOC1.Name));
LOC3 = Isnimrodidentifier_76357((*(*Result_192292).Name).S);
if (!!(LOC3)) goto LA4;
Rawmessage_47553(((NU8) 19), (*(*Result_192292).Name).S);
LA4: ;
asgnRef((void**) &(*Result_192292).Owner, Result_192292);
(*Result_192292).Info = Newlineinfo_47574(Filename_192291, 1, 1);
(*Result_192292).Flags |=(1<<((NI32)(((NU8) 0))%(sizeof(NI32)*8)));
Initstrtable_55746(&(*Result_192292).Tab);
Registermodule_192229(Filename_192291, Result_192292);
Strtableadd_59064(&(*Result_192292).Tab, Result_192292);
return Result_192292;
}
N_NIMCALL(TY55547*, Compilemodule_192322)(NimStringDesc* Filename_192324, NIM_BOOL Ismainfile_192325, NIM_BOOL Issystemfile_192326) {
TY55547* Result_192358;
TY92031* Rd_192359;
NimStringDesc* F_192360;
NIM_BOOL LOC8;
Result_192358 = 0;
Rd_192359 = 0;
Rd_192359 = NIM_NIL;
F_192360 = 0;
F_192360 = nosaddFileExt(Filename_192324, ((NimStringDesc*) &TMP196869));
Result_192358 = Newmodule_192289(Filename_192324);
if (!Ismainfile_192325) goto LA2;
(*Result_192358).Flags |=(1<<((NI32)(((NU8) 15))%(sizeof(NI32)*8)));
LA2: ;
if (!Issystemfile_192326) goto LA5;
(*Result_192358).Flags |=(1<<((NI32)(((NU8) 16))%(sizeof(NI32)*8)));
LA5: ;
LOC8 = (Gcmd_46082 == ((NU8) 1));
if (LOC8) goto LA9;
LOC8 = (Gcmd_46082 == ((NU8) 2));
LA9: ;
if (!LOC8) goto LA10;
Rd_192359 = Handlesymbolfile_92060(Result_192358, F_192360);
if (!((*Result_192358).Sup.Id < 0)) goto LA13;
Internalerror_47571(((NimStringDesc*) &TMP196922));
LA13: ;
goto LA7;
LA10: ;
(*Result_192358).Sup.Id = Getid_55693();
LA7: ;
Processmodule_104035(Result_192358, F_192360, NIM_NIL, Rd_192359);
return Result_192358;
}
N_NIMCALL(TY55547*, Importmodule_192327)(NimStringDesc* Filename_192329) {
TY55547* Result_192330;
Result_192330 = 0;
Result_192330 = Getmodule_192256(Filename_192329);
if (!(Result_192330 == NIM_NIL)) goto LA2;
Result_192330 = Compilemodule_192322(Filename_192329, NIM_FALSE, NIM_FALSE);
goto LA1;
LA2: ;
if (!(((*Result_192330).Flags &(1<<((((NU8) 16))&31)))!=0)) goto LA4;
Limessage_47562((*Result_192330).Info, ((NU8) 37), (*(*Result_192330).Name).S);
goto LA1;
LA4: ;
LA1: ;
return Result_192330;
}
N_NIMCALL(void, Wantfile_192713)(NimStringDesc* Filename_192715) {
TY47532 LOC4;
if (!((Filename_192715) && (Filename_192715)->Sup.len == 0)) goto LA2;
LOC4 = Newlineinfo_47574(((NimStringDesc*) &TMP196924), 1, 1);
Limessage_47562(LOC4, ((NU8) 181), ((NimStringDesc*) &TMP196925));
LA2: ;
}
N_NIMCALL(void, Semanticpasses_192408)(void) {
TY104006 LOC1;
TY104006 LOC2;
TY104006 LOC3;
LOC1 = Verbosepass_186004();
Registerpass_104028(&LOC1);
LOC2 = Sempass_124001();
Registerpass_104028(&LOC2);
LOC3 = Transfpass_188005();
Registerpass_104028(&LOC3);
}
N_NIMCALL(void, Compileproject_192405)(NimStringDesc* Filename_192407) {
NimStringDesc* LOC1;
NimStringDesc* LOC2;
TY55547* LOC3;
NimStringDesc* LOC4;
TY55547* LOC5;
LOC1 = 0;
LOC1 = nosaddFileExt(((NimStringDesc*) &TMP197869), ((NimStringDesc*) &TMP196869));
LOC2 = 0;
LOC2 = nosJoinPath(Libpath_46110, LOC1);
LOC3 = 0;
LOC3 = Compilemodule_192322(LOC2, NIM_FALSE, NIM_TRUE);
LOC4 = 0;
LOC4 = nosaddFileExt(Filename_192407, ((NimStringDesc*) &TMP196869));
LOC5 = 0;
LOC5 = Compilemodule_192322(LOC4, NIM_TRUE, NIM_FALSE);
}
N_NIMCALL(void, Commandcompiletoc_192436)(NimStringDesc* Filename_192438) {
TY104006 LOC1;
TY104006 LOC2;
NimStringDesc* LOC6;
Semanticpasses_192408();
LOC1 = Cgenpass_159201();
Registerpass_104028(&LOC1);
LOC2 = Rodwritepass_110001();
Registerpass_104028(&LOC2);
Compileproject_192405(Filename_192438);
if (!!((Gcmd_46082 == ((NU8) 17)))) goto LA4;
LOC6 = 0;
LOC6 = nosChangeFileExt(Filename_192438, ((NimStringDesc*) &TMP196925));
Callccompiler_69370(LOC6);
LA4: ;
}
N_NIMCALL(void, Commandcompiletoecmascript_192601)(NimStringDesc* Filename_192603) {
TY104006 LOC1;
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 8))%(sizeof(NI32)*8)));
Settarget_51574(((NU8) 20), ((NU8) 11));
Initdefines_63049();
Semanticpasses_192408();
LOC1 = Ecmasgenpass_178004();
Registerpass_104028(&LOC1);
Compileproject_192405(Filename_192603);
}
N_NIMCALL(void, Commandpretty_192643)(NimStringDesc* Filename_192645) {
TY55525* Module_192646;
NimStringDesc* LOC1;
NimStringDesc* LOC5;
Module_192646 = 0;
LOC1 = 0;
LOC1 = nosaddFileExt(Filename_192645, ((NimStringDesc*) &TMP196869));
Module_192646 = Parsefile_91031(LOC1);
if (!!((Module_192646 == NIM_NIL))) goto LA3;
LOC5 = 0;
LOC5 = Getoutfile_46143(Filename_192645, ((NimStringDesc*) &TMP198089));
Rendermodule_84035(Module_192646, LOC5, 0);
LA3: ;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793) {
memcpy(((NCSTRING) (&(*Dest_18792).data[((*Dest_18792).Sup.len)-0])), ((NCSTRING) ((*Src_18793).data)), ((int) ((NI64)((NI64)((*Src_18793).Sup.len + 1) * 1))));
(*Dest_18792).Sup.len += (*Src_18793).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18809, NIM_CHAR C_18810) {
(*Dest_18809).data[((*Dest_18809).Sup.len)-0] = C_18810;
(*Dest_18809).data[((NI64)((*Dest_18809).Sup.len + 1))-0] = 0;
(*Dest_18809).Sup.len += 1;
}
N_NIMCALL(void, Commandgendepend_192410)(NimStringDesc* Filename_192412) {
TY104006 LOC1;
TY104006 LOC2;
NimStringDesc* LOC3;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Semanticpasses_192408();
LOC1 = Gendependpass_187004();
Registerpass_104028(&LOC1);
LOC2 = Cleanuppass_186006();
Registerpass_104028(&LOC2);
Compileproject_192405(Filename_192412);
Generatedot_187006(Filename_192412);
LOC3 = 0;
LOC4 = 0;
LOC4 = nosChangeFileExt(Filename_192412, ((NimStringDesc*) &TMP198487));
LOC5 = 0;
LOC5 = nosChangeFileExt(Filename_192412, ((NimStringDesc*) &TMP198488));
LOC3 = rawNewString(LOC4->Sup.len + LOC5->Sup.len + 13);
appendString(LOC3, ((NimStringDesc*) &TMP198486));
appendString(LOC3, LOC4);
appendChar(LOC3, 32);
appendString(LOC3, LOC5);
Execexternalprogram_69373(LOC3);
}
N_NIMCALL(void, Commandcheck_192433)(NimStringDesc* Filename_192435) {
Semanticpasses_192408();
Compileproject_192405(Filename_192435);
}
N_NIMCALL(void, Commandscan_192666)(NimStringDesc* Filename_192668) {
NimStringDesc* F_192669;
TY74013* Stream_192670;
TY76267 L_192682;
TY76263* Tok_192683;
F_192669 = 0;
F_192669 = nosaddFileExt(Filename_192668, ((NimStringDesc*) &TMP196869));
Stream_192670 = 0;
Stream_192670 = Llstreamopen_74032(F_192669, ((NU8) 0));
if (!!((Stream_192670 == NIM_NIL))) goto LA2;
memset((void*)&L_192682, 0, sizeof(L_192682));
L_192682.Sup.Sup.m_type = NTI76267;
Tok_192683 = 0;
Tok_192683 = (TY76263*) newObj(NTI76261, sizeof(TY76263));
(*Tok_192683).m_type = NTI76263;
Openlexer_76298(&L_192682, F_192669, Stream_192670);
while (1) {
Rawgettok_76304(&L_192682, Tok_192683);
Printtok_76320(Tok_192683);
if (!((*Tok_192683).Toktype == ((NU8) 1))) goto LA6;
goto LA4;
LA6: ;
} LA4: ;
Closelexer_76316(&L_192682);
goto LA1;
LA2: ;
Rawmessage_47553(((NU8) 2), F_192669);
LA1: ;
}
N_NIMCALL(void, Commandinteractive_192616)(void) {
TY104006 LOC1;
TY104006 LOC2;
TY104006 LOC3;
TY104006 LOC4;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
TY55547* LOC7;
TY55547* M_192630;
TY74013* LOC8;
Gglobaloptions_46077 |=(1<<((NI32)(((NU8) 8))%(sizeof(NI32)*8)));
Settarget_51574(((NU8) 21), ((NU8) 12));
Initdefines_63049();
LOC1 = Verbosepass_186004();
Registerpass_104028(&LOC1);
LOC2 = Sempass_124001();
Registerpass_104028(&LOC2);
LOC3 = Transfpass_188005();
Registerpass_104028(&LOC3);
LOC4 = Evalpass_114046();
Registerpass_104028(&LOC4);
LOC5 = 0;
LOC5 = nosaddFileExt(((NimStringDesc*) &TMP197869), ((NimStringDesc*) &TMP196869));
LOC6 = 0;
LOC6 = nosJoinPath(Libpath_46110, LOC5);
LOC7 = 0;
LOC7 = Compilemodule_192322(LOC6, NIM_FALSE, NIM_TRUE);
M_192630 = 0;
M_192630 = Newmodule_192289(((NimStringDesc*) &TMP198491));
(*M_192630).Sup.Id = Getid_55693();
(*M_192630).Flags |=(1<<((NI32)(((NU8) 15))%(sizeof(NI32)*8)));
LOC8 = 0;
LOC8 = Llstreamopenstdin_74038();
Processmodule_104035(M_192630, ((NimStringDesc*) &TMP198491), LOC8, NIM_NIL);
}
N_NIMCALL(void, Maincommand_192201)(NimStringDesc* Cmd_192203, NimStringDesc* Filename_192204) {
TY38715 LOC4;
NU8 LOC5;
NimStringDesc* LOC6;
TY55525* LOC7;
Appendstr_43061(&Searchpaths_46079, Libpath_46110);
if (!!(((Filename_192204) && (Filename_192204)->Sup.len == 0))) goto LA2;
memset((void*)&LOC4, 0, sizeof(LOC4));
nossplitFile(Filename_192204, &LOC4);
Prependstr_43071(&Searchpaths_46079, LOC4.Dir);
LA2: ;
Setid_55695(100);
Gincludefile_104051 = Parsefile_91031;
Gimportmodule_104047 = Importmodule_192327;
LOC5 = Whichkeyword_71468(Cmd_192203);
switch (LOC5) {
case ((NU8) 107):
case ((NU8) 200):
case ((NU8) 176):
case ((NU8) 192):
Gcmd_46082 = ((NU8) 1);
Wantfile_192713(Filename_192204);
Commandcompiletoc_192436(Filename_192204);
break;
case ((NU8) 179):
Gcmd_46082 = ((NU8) 17);
Wantfile_192713(Filename_192204);
Rawmessage_47553(((NU8) 176), Cmd_192203);
break;
case ((NU8) 201):
Gcmd_46082 = ((NU8) 2);
Wantfile_192713(Filename_192204);
Commandcompiletoc_192436(Filename_192204);
break;
case ((NU8) 202):
case ((NU8) 211):
Gcmd_46082 = ((NU8) 3);
Wantfile_192713(Filename_192204);
Commandcompiletoecmascript_192601(Filename_192204);
break;
case ((NU8) 203):
Gcmd_46082 = ((NU8) 4);
Wantfile_192713(Filename_192204);
Rawmessage_47553(((NU8) 176), Cmd_192203);
break;
case ((NU8) 204):
Gcmd_46082 = ((NU8) 6);
Wantfile_192713(Filename_192204);
Commandpretty_192643(Filename_192204);
break;
case ((NU8) 205):
Gcmd_46082 = ((NU8) 7);
Loadspecialconfig_79007(((NimStringDesc*) &TMP198090));
Wantfile_192713(Filename_192204);
Commanddoc_154001(Filename_192204);
break;
case ((NU8) 212):
Gcmd_46082 = ((NU8) 14);
Loadspecialconfig_79007(((NimStringDesc*) &TMP198090));
Wantfile_192713(Filename_192204);
Commandrst2html_154004(Filename_192204);
break;
case ((NU8) 213):
Gcmd_46082 = ((NU8) 15);
Loadspecialconfig_79007(((NimStringDesc*) &TMP198478));
Wantfile_192713(Filename_192204);
Commandrst2tex_154007(Filename_192204);
break;
case ((NU8) 206):
Gcmd_46082 = ((NU8) 8);
Wantfile_192713(Filename_192204);
Commandgendepend_192410(Filename_192204);
break;
case ((NU8) 207):
Gcmd_46082 = ((NU8) 9);
Listsymbols_63062();
break;
case ((NU8) 208):
Gcmd_46082 = ((NU8) 10);
Wantfile_192713(Filename_192204);
Commandcheck_192433(Filename_192204);
break;
case ((NU8) 209):
Gcmd_46082 = ((NU8) 11);
Wantfile_192713(Filename_192204);
LOC6 = 0;
LOC6 = nosaddFileExt(Filename_192204, ((NimStringDesc*) &TMP196869));
LOC7 = 0;
LOC7 = Parsefile_91031(LOC6);
break;
case ((NU8) 210):
Gcmd_46082 = ((NU8) 12);
Wantfile_192713(Filename_192204);
Commandscan_192666(Filename_192204);
Messageout_47550(((NimStringDesc*) &TMP198490));
break;
case ((NU8) 214):
Gcmd_46082 = ((NU8) 16);
Commandinteractive_192616();
break;
default:
Rawmessage_47553(((NU8) 176), Cmd_192203);
break;
}
}
N_NOINLINE(void, mainInit)(void) {
asgnRefNoCycle((void**) &Compmods_192227, (TY192208*) newSeq(NTI192208, 0));
}
