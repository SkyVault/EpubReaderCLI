/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/dustin/.choosenim/toolchains/nim-0.18.0/lib -o /home/dustin/Documents/EpubCLI/src/nimcache/stdlib_lexbase.o /home/dustin/Documents/EpubCLI/src/nimcache/stdlib_lexbase.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw {
  RootObj Sup;
NI bufpos;
NCSTRING buf;
NI bufLen;
tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* input;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
tySet_tyChar_nmiMWKVIe46vacnhAFrQvw refillChars;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_KjFcmLOhf4VQvVcyLJWXZw) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(void, tyProc_jlOYFw9cHausuCbPoWx2iiA) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NI, tyProc_tjaJtoUzLe1BMUbItlcGhQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc_b9bsIuILxTLVZHPvJBW187A) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ {
  RootObj Sup;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q closeImpl;
tyProc_KjFcmLOhf4VQvVcyLJWXZw atEndImpl;
tyProc_jlOYFw9cHausuCbPoWx2iiA setPositionImpl;
tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ getPositionImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ readDataImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ peekDataImpl;
tyProc_b9bsIuILxTLVZHPvJBW187A writeDataImpl;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q flushImpl;
};
N_LIB_PRIVATE N_NIMCALL(void, close_QbedUCk2XwI9c7bbRzXBY0g)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L);
N_LIB_PRIVATE N_NOCONV(void, dealloc_RCjNtRnHdRYntrcE7YtwWw)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, close_4ed7IXme7lqtClFI7s2sTQ_2)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer_QbedUCk2XwI9c7bbRzXBY0g_2)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, moveMem_E1xtACub5WcDa3vbrIXbwg_2system)(void* dest, void* source, NI size);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_LIB_PRIVATE N_NIMCALL(NI, readData_Gnwdizh7H5Q9cYivUoGHrVA)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_LIB_PRIVATE N_NOCONV(void*, realloc_y4TzCoc3hQhz9cedxS9cbemA)(void* p, NI newSize);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer_IwUEvMBOLRY9cqyar6XKEaw)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(NI, handleCR_IwUEvMBOLRY9cqyar6XKEaw_2)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(NI, handleLF_IwUEvMBOLRY9cqyar6XKEaw_3)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(NI, handleRefillChar_IwUEvMBOLRY9cqyar6XKEaw_4)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom_BMPUUaJVkFzDJfE3dUzOCw)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L);
N_LIB_PRIVATE N_NIMCALL(void, open_xmgaYJZNnO6QcDtac9bs3Vg)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* input, NI bufLen, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw refillChars);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NOCONV(void*, alloc_sVm4rDImKK2ZDdylByayiA_2)(NI size);
N_LIB_PRIVATE N_NIMCALL(NI, getColNumber_9cj186ckGjLqyndkoW7bBdg)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getCurrentLine_PFplgYtS15h9cLnigIjEC1g)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_B6cGbTPhMsqMovc9cOcIHRw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_S9agCYBinaYZnGWcjTdxclg_;
extern TNimType NTI_r3Wc5tOoxP8rz1DvGVTUvw_;
extern TNimType NTI_nmiMWKVIe46vacnhAFrQvw_;
TNimType NTI_HDqWPvEAxZK51ZcfaeQEdg_;
NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw NewLines_rrnZx358tQngJYaRuVXAWA = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_2, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_5, "\0120 <= toCopy ", 13);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_14, "s < L.bufLen ", 13);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_19, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_25, "pos <= L.sentinel ", 18);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_28, "L.buf[pos] == \'\\c\' ", 19);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_30, "L.buf[pos] == \'\\L\' ", 19);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_32, "contains(L.refillChars, L.buf[pos]) ", 36);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_35, "\0120 < bufLen ", 12);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_36, "\012not (input == nil) ", 20);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_40, "", 0);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_42, "\012", 1);
STRING_LITERAL(TM_k6p5NxDJat9aTyZxfZjCDJQ_43, "^\012", 2);

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_LIB_PRIVATE N_NIMCALL(void, close_QbedUCk2XwI9c7bbRzXBY0g)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L) {
	nimfr_("close", "lexbase.nim");
	nimln_(51, "lexbase.nim");
	dealloc_RCjNtRnHdRYntrcE7YtwWw(((void*) ((*L).buf)));
	nimln_(52, "lexbase.nim");
	close_4ed7IXme7lqtClFI7s2sTQ_2((*L).input);
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, moveMem_E1xtACub5WcDa3vbrIXbwg_2system)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest, source, ((size_t) (size)));
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(T7_)) goto LA8_;
		T7_ = (b == ((NI) -1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, fillBuffer_QbedUCk2XwI9c7bbRzXBY0g_2)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_3;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_4;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_8;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_9;
	NI T13_;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_10;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_11;
	nimfr_("fillBuffer", "lexbase.nim");
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	nimln_(62, "lexbase.nim");
	{
		if (!!(((*L).sentinel < (*L).bufLen))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_2));
	}
	LA3_: ;
	nimln_(63, "lexbase.nim");
	TM_k6p5NxDJat9aTyZxfZjCDJQ_3 = subInt((*L).bufLen, (*L).sentinel);
	TM_k6p5NxDJat9aTyZxfZjCDJQ_4 = subInt((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_3), ((NI) 1));
	toCopy = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_4);
	nimln_(64, "lexbase.nim");
	{
		if (!!((((NI) 0) <= toCopy))) goto LA7_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_5));
	}
	LA7_: ;
	nimln_(65, "lexbase.nim");
	{
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_6;
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_7;
		if (!(((NI) 0) < toCopy)) goto LA11_;
		nimln_(70, "lexbase.nim");
		TM_k6p5NxDJat9aTyZxfZjCDJQ_6 = addInt((*L).sentinel, ((NI) 1));
		TM_k6p5NxDJat9aTyZxfZjCDJQ_7 = mulInt(toCopy, ((NI) 1));
		moveMem_E1xtACub5WcDa3vbrIXbwg_2system(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_6)]))), ((NI)chckRange((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_7), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA11_: ;
	nimln_(71, "lexbase.nim");
	nimln_(72, "lexbase.nim");
	TM_k6p5NxDJat9aTyZxfZjCDJQ_8 = addInt((*L).sentinel, ((NI) 1));
	TM_k6p5NxDJat9aTyZxfZjCDJQ_9 = mulInt((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_8), ((NI) 1));
	T13_ = (NI)0;
	T13_ = readData_Gnwdizh7H5Q9cYivUoGHrVA((*L).input, ((void*) ((&(*L).buf[toCopy]))), (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_9));
	TM_k6p5NxDJat9aTyZxfZjCDJQ_10 = divInt(T13_, ((NI) 1));
	charsRead = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_10);
	nimln_(73, "lexbase.nim");
	TM_k6p5NxDJat9aTyZxfZjCDJQ_11 = addInt(toCopy, charsRead);
	s = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_11);
	nimln_(74, "lexbase.nim");
	{
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_12;
		TM_k6p5NxDJat9aTyZxfZjCDJQ_12 = addInt((*L).sentinel, ((NI) 1));
		if (!(charsRead < (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_12))) goto LA16_;
		nimln_(75, "lexbase.nim");
		(*L).buf[s] = 0;
		nimln_(76, "lexbase.nim");
		(*L).sentinel = s;
	}
	goto LA14_;
	LA16_: ;
	{
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_13;
		nimln_(79, "lexbase.nim");
		TM_k6p5NxDJat9aTyZxfZjCDJQ_13 = subInt(s, ((NI) 1));
		s = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_13);
		{
			nimln_(80, "lexbase.nim");
			while (1) {
				nimln_(81, "lexbase.nim");
				{
					if (!!((s < (*L).bufLen))) goto LA23_;
					failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_14));
				}
				LA23_: ;
				{
					nimln_(82, "lexbase.nim");
					while (1) {
						NIM_BOOL T27_;
						NI TM_k6p5NxDJat9aTyZxfZjCDJQ_15;
						T27_ = (NIM_BOOL)0;
						T27_ = (((NI) 0) <= s);
						if (!(T27_)) goto LA28_;
						nimln_(1212, "system.nim");
						nimln_(82, "lexbase.nim");
						T27_ = !((((*L).refillChars[(NU)(((NU8)((*L).buf[s])))>>3] &(1U<<((NU)(((NU8)((*L).buf[s])))&7U)))!=0));
						LA28_: ;
						if (!T27_) goto LA26;
						TM_k6p5NxDJat9aTyZxfZjCDJQ_15 = subInt(s, ((NI) 1));
						s = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_15);
					} LA26: ;
				}
				nimln_(83, "lexbase.nim");
				{
					if (!(((NI) 0) <= s)) goto LA31_;
					nimln_(85, "lexbase.nim");
					(*L).sentinel = s;
					nimln_(86, "lexbase.nim");
					goto LA19;
				}
				goto LA29_;
				LA31_: ;
				{
					NI TM_k6p5NxDJat9aTyZxfZjCDJQ_16;
					NI TM_k6p5NxDJat9aTyZxfZjCDJQ_17;
					void* T34_;
					NI TM_k6p5NxDJat9aTyZxfZjCDJQ_20;
					NI T39_;
					NI TM_k6p5NxDJat9aTyZxfZjCDJQ_21;
					NI TM_k6p5NxDJat9aTyZxfZjCDJQ_24;
					nimln_(90, "lexbase.nim");
					oldBufLen = (*L).bufLen;
					nimln_(91, "lexbase.nim");
					TM_k6p5NxDJat9aTyZxfZjCDJQ_16 = mulInt((*L).bufLen, ((NI) 2));
					(*L).bufLen = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_16);
					nimln_(95, "lexbase.nim");
					TM_k6p5NxDJat9aTyZxfZjCDJQ_17 = mulInt((*L).bufLen, ((NI) 1));
					T34_ = (void*)0;
					T34_ = realloc_y4TzCoc3hQhz9cedxS9cbemA(((void*) ((*L).buf)), ((NI)chckRange((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_17), ((NI) 0), ((NI) IL64(9223372036854775807)))));
					(*L).buf = ((NCSTRING) (T34_));
					nimln_(96, "lexbase.nim");
					{
						NI TM_k6p5NxDJat9aTyZxfZjCDJQ_18;
						TM_k6p5NxDJat9aTyZxfZjCDJQ_18 = subInt((*L).bufLen, oldBufLen);
						if (!!(((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_18) == oldBufLen))) goto LA37_;
						failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_19));
					}
					LA37_: ;
					nimln_(97, "lexbase.nim");
					nimln_(98, "lexbase.nim");
					TM_k6p5NxDJat9aTyZxfZjCDJQ_20 = mulInt(oldBufLen, ((NI) 1));
					T39_ = (NI)0;
					T39_ = readData_Gnwdizh7H5Q9cYivUoGHrVA((*L).input, ((void*) ((&(*L).buf[oldBufLen]))), (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_20));
					TM_k6p5NxDJat9aTyZxfZjCDJQ_21 = divInt(T39_, ((NI) 1));
					charsRead = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_21);
					nimln_(99, "lexbase.nim");
					{
						NI TM_k6p5NxDJat9aTyZxfZjCDJQ_22;
						NI TM_k6p5NxDJat9aTyZxfZjCDJQ_23;
						if (!(charsRead < oldBufLen)) goto LA42_;
						nimln_(100, "lexbase.nim");
						TM_k6p5NxDJat9aTyZxfZjCDJQ_22 = addInt(oldBufLen, charsRead);
						(*L).buf[(NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_22)] = 0;
						nimln_(101, "lexbase.nim");
						TM_k6p5NxDJat9aTyZxfZjCDJQ_23 = addInt(oldBufLen, charsRead);
						(*L).sentinel = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_23);
						nimln_(102, "lexbase.nim");
						goto LA19;
					}
					LA42_: ;
					nimln_(103, "lexbase.nim");
					TM_k6p5NxDJat9aTyZxfZjCDJQ_24 = subInt((*L).bufLen, ((NI) 1));
					s = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_24);
				}
				LA29_: ;
			}
		} LA19: ;
	}
	LA14_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer_IwUEvMBOLRY9cqyar6XKEaw)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos) {
	NI result;
	nimfr_("fillBaseLexer", "lexbase.nim");
	result = (NI)0;
	nimln_(106, "lexbase.nim");
	{
		if (!!((pos <= (*L).sentinel))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_25));
	}
	LA3_: ;
	nimln_(107, "lexbase.nim");
	{
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_26;
		if (!(pos < (*L).sentinel)) goto LA7_;
		nimln_(108, "lexbase.nim");
		TM_k6p5NxDJat9aTyZxfZjCDJQ_26 = addInt(pos, ((NI) 1));
		result = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_26);
	}
	goto LA5_;
	LA7_: ;
	{
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_27;
		nimln_(110, "lexbase.nim");
		fillBuffer_QbedUCk2XwI9c7bbRzXBY0g_2(L);
		nimln_(111, "lexbase.nim");
		TM_k6p5NxDJat9aTyZxfZjCDJQ_27 = addInt((*L).offsetBase, pos);
		(*L).offsetBase = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_27);
		nimln_(112, "lexbase.nim");
		(*L).bufpos = ((NI) 0);
		nimln_(113, "lexbase.nim");
		result = ((NI) 0);
	}
	LA5_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, handleCR_IwUEvMBOLRY9cqyar6XKEaw_2)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos) {
	NI result;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_29;
	nimfr_("handleCR", "lexbase.nim");
	result = (NI)0;
	nimln_(119, "lexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(13)))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_28));
	}
	LA3_: ;
	nimln_(120, "lexbase.nim");
	TM_k6p5NxDJat9aTyZxfZjCDJQ_29 = addInt((*L).lineNumber, ((NI) 1));
	(*L).lineNumber = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_29);
	nimln_(121, "lexbase.nim");
	result = fillBaseLexer_IwUEvMBOLRY9cqyar6XKEaw(L, pos);
	nimln_(122, "lexbase.nim");
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA7_;
		nimln_(123, "lexbase.nim");
		result = fillBaseLexer_IwUEvMBOLRY9cqyar6XKEaw(L, result);
	}
	LA7_: ;
	nimln_(124, "lexbase.nim");
	(*L).lineStart = result;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, handleLF_IwUEvMBOLRY9cqyar6XKEaw_3)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos) {
	NI result;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_31;
	nimfr_("handleLF", "lexbase.nim");
	result = (NI)0;
	nimln_(130, "lexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(10)))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_30));
	}
	LA3_: ;
	nimln_(131, "lexbase.nim");
	TM_k6p5NxDJat9aTyZxfZjCDJQ_31 = addInt((*L).lineNumber, ((NI) 1));
	(*L).lineNumber = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_31);
	nimln_(132, "lexbase.nim");
	result = fillBaseLexer_IwUEvMBOLRY9cqyar6XKEaw(L, pos);
	nimln_(133, "lexbase.nim");
	(*L).lineStart = result;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, handleRefillChar_IwUEvMBOLRY9cqyar6XKEaw_4)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos) {
	NI result;
	nimfr_("handleRefillChar", "lexbase.nim");
	result = (NI)0;
	nimln_(137, "lexbase.nim");
	{
		if (!!((((*L).refillChars[(NU)(((NU8)((*L).buf[pos])))>>3] &(1U<<((NU)(((NU8)((*L).buf[pos])))&7U)))!=0))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_32));
	}
	LA3_: ;
	nimln_(138, "lexbase.nim");
	result = fillBaseLexer_IwUEvMBOLRY9cqyar6XKEaw(L, pos);
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom_BMPUUaJVkFzDJfE3dUzOCw)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L) {
	nimfr_("skipUtf8Bom", "lexbase.nim");
	nimln_(141, "lexbase.nim");
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_33;
		NI TM_k6p5NxDJat9aTyZxfZjCDJQ_34;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((NU8)((*L).buf[((NI) 0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		T4_ = ((NU8)((*L).buf[((NI) 1)]) == (NU8)(187));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = ((NU8)((*L).buf[((NI) 2)]) == (NU8)(191));
		LA6_: ;
		if (!T3_) goto LA7_;
		nimln_(142, "lexbase.nim");
		TM_k6p5NxDJat9aTyZxfZjCDJQ_33 = addInt((*L).bufpos, ((NI) 3));
		(*L).bufpos = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_33);
		nimln_(143, "lexbase.nim");
		TM_k6p5NxDJat9aTyZxfZjCDJQ_34 = addInt((*L).lineStart, ((NI) 3));
		(*L).lineStart = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_34);
	}
	LA7_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, open_xmgaYJZNnO6QcDtac9bs3Vg)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* input, NI bufLen, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw refillChars) {
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_37;
	void* T9_;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_38;
	nimfr_("open", "lexbase.nim");
	nimln_(148, "lexbase.nim");
	{
		if (!!((((NI) 0) < bufLen))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_35));
	}
	LA3_: ;
	nimln_(149, "lexbase.nim");
	{
		if (!!(!((input == NIM_NIL)))) goto LA7_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_36));
	}
	LA7_: ;
	nimln_(150, "lexbase.nim");
	unsureAsgnRef((void**) (&(*L).input), input);
	nimln_(151, "lexbase.nim");
	(*L).bufpos = ((NI) 0);
	nimln_(152, "lexbase.nim");
	(*L).offsetBase = ((NI) 0);
	nimln_(153, "lexbase.nim");
	(*L).bufLen = bufLen;
	nimln_(154, "lexbase.nim");
	memcpy((void*)(*L).refillChars, (NIM_CONST void*)refillChars, 32);
	nimln_(158, "lexbase.nim");
	TM_k6p5NxDJat9aTyZxfZjCDJQ_37 = mulInt(bufLen, ((NI) 1));
	T9_ = (void*)0;
	T9_ = alloc_sVm4rDImKK2ZDdylByayiA_2(((NI)chckRange((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_37), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	(*L).buf = ((NCSTRING) (T9_));
	nimln_(159, "lexbase.nim");
	TM_k6p5NxDJat9aTyZxfZjCDJQ_38 = subInt(bufLen, ((NI) 1));
	(*L).sentinel = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_38);
	nimln_(160, "lexbase.nim");
	(*L).lineStart = ((NI) 0);
	nimln_(161, "lexbase.nim");
	(*L).lineNumber = ((NI) 1);
	nimln_(162, "lexbase.nim");
	fillBuffer_QbedUCk2XwI9c7bbRzXBY0g_2(L);
	nimln_(163, "lexbase.nim");
	skipUtf8Bom_BMPUUaJVkFzDJfE3dUzOCw(L);
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(NI, getColNumber_9cj186ckGjLqyndkoW7bBdg)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NI pos) {
	NI result;
	NI TM_k6p5NxDJat9aTyZxfZjCDJQ_39;
	nimfr_("getColNumber", "lexbase.nim");
	result = (NI)0;
	nimln_(167, "lexbase.nim");
	TM_k6p5NxDJat9aTyZxfZjCDJQ_39 = subInt(pos, (*L).lineStart);
	if ((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_39) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = ((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_39) > 0? ((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_39)) : -((NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_39)));
	popFrame();
	return result;
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getCurrentLine_PFplgYtS15h9cLnigIjEC1g)(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw* L, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr_("getCurrentLine", "lexbase.nim");
	result = (NimStringDesc*)0;
	i = (NI)0;
	nimln_(172, "lexbase.nim");
	result = copyString(((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_40));
	nimln_(173, "lexbase.nim");
	i = (*L).lineStart;
	{
		nimln_(174, "lexbase.nim");
		while (1) {
			NI TM_k6p5NxDJat9aTyZxfZjCDJQ_41;
			if (!!((((NU8)((*L).buf[i])) == ((NU8)(13)) || ((NU8)((*L).buf[i])) == ((NU8)(10)) || ((NU8)((*L).buf[i])) == ((NU8)(0))))) goto LA2;
			nimln_(175, "lexbase.nim");
			result = addChar(result, (*L).buf[i]);
			nimln_(176, "lexbase.nim");
			TM_k6p5NxDJat9aTyZxfZjCDJQ_41 = addInt(i, ((NI) 1));
			i = (NI)(TM_k6p5NxDJat9aTyZxfZjCDJQ_41);
		} LA2: ;
	}
	nimln_(177, "lexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_42));
	nimln_(178, "lexbase.nim");
	{
		NimStringDesc* T7_;
		NI T8_;
		NimStringDesc* T9_;
		if (!marker) goto LA5_;
		nimln_(179, "lexbase.nim");
		T7_ = (NimStringDesc*)0;
		nimln_(1136, "strutils.nim");
		nimln_(179, "lexbase.nim");
		T8_ = (NI)0;
		T8_ = getColNumber_9cj186ckGjLqyndkoW7bBdg(L, (*L).bufpos);
		T9_ = (NimStringDesc*)0;
		T9_ = nsuRepeatChar(32, ((NI)chckRange(T8_, ((NI) 0), ((NI) IL64(9223372036854775807)))));
		T7_ = rawNewString(T9_->Sup.len + 2);
appendString(T7_, T9_);
appendString(T7_, ((NimStringDesc*) &TM_k6p5NxDJat9aTyZxfZjCDJQ_43));
		result = resizeString(result, T7_->Sup.len + 0);
appendString(result, T7_);
	}
	LA5_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit000)(void) {
	nimfr_("lexbase", "lexbase.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit000)(void) {
static TNimNode* TM_k6p5NxDJat9aTyZxfZjCDJQ_44[9];
static TNimNode TM_k6p5NxDJat9aTyZxfZjCDJQ_0[11];
NTI_B6cGbTPhMsqMovc9cOcIHRw_.size = sizeof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw);
NTI_B6cGbTPhMsqMovc9cOcIHRw_.kind = 17;
NTI_B6cGbTPhMsqMovc9cOcIHRw_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_44[0] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, bufpos);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[1].name = "bufpos";
TM_k6p5NxDJat9aTyZxfZjCDJQ_44[1] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, buf);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].typ = (&NTI_S9agCYBinaYZnGWcjTdxclg_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[2].name = "buf";
TM_k6p5NxDJat9aTyZxfZjCDJQ_44[2] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, bufLen);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[3].name = "bufLen";
TM_k6p5NxDJat9aTyZxfZjCDJQ_44[3] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, input);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].typ = (&NTI_r3Wc5tOoxP8rz1DvGVTUvw_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[4].name = "input";
TM_k6p5NxDJat9aTyZxfZjCDJQ_44[4] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, lineNumber);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[5].name = "lineNumber";
TM_k6p5NxDJat9aTyZxfZjCDJQ_44[5] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, sentinel);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[6].name = "sentinel";
TM_k6p5NxDJat9aTyZxfZjCDJQ_44[6] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, lineStart);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[7].name = "lineStart";
TM_k6p5NxDJat9aTyZxfZjCDJQ_44[7] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, offsetBase);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[8].name = "offsetBase";
TM_k6p5NxDJat9aTyZxfZjCDJQ_44[8] = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[9];
NTI_HDqWPvEAxZK51ZcfaeQEdg_.size = sizeof(tySet_tyChar_nmiMWKVIe46vacnhAFrQvw);
NTI_HDqWPvEAxZK51ZcfaeQEdg_.kind = 19;
NTI_HDqWPvEAxZK51ZcfaeQEdg_.base = (&NTI_nmiMWKVIe46vacnhAFrQvw_);
NTI_HDqWPvEAxZK51ZcfaeQEdg_.flags = 3;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[10].len = 0; TM_k6p5NxDJat9aTyZxfZjCDJQ_0[10].kind = 0;
NTI_HDqWPvEAxZK51ZcfaeQEdg_.node = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[10];
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[9].kind = 1;
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[9].offset = offsetof(tyObject_BaseLexer_B6cGbTPhMsqMovc9cOcIHRw, refillChars);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[9].typ = (&NTI_HDqWPvEAxZK51ZcfaeQEdg_);
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[9].name = "refillChars";
TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0].len = 9; TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0].kind = 2; TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0].sons = &TM_k6p5NxDJat9aTyZxfZjCDJQ_44[0];
NTI_B6cGbTPhMsqMovc9cOcIHRw_.node = &TM_k6p5NxDJat9aTyZxfZjCDJQ_0[0];
}

