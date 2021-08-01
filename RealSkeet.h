/*******************************************************************************
	Generated by: DLL to C version 3.62
	Date: 2021-8-1
	Description: The declaration of functions and variables for RealSkeet.dll.
	Website: http://www.dll-decompiler.com
	Technical Support: support@dll-decompiler.com
*******************************************************************************/

#if !defined(_REALSKEET_SUPP_H_00B99000_INCLUDED_)
#define _REALSKEET_SUPP_H_00B99000_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include <windows.h>

#pragma pack(push)
#pragma pack(1)

#include "RealSkeet_text.h"
#include "RealSkeet_rdata.h"
#include "RealSkeet_data.h"
#include "RealSkeet_retard0.h"

__declspec(align(16)) struct stRealSkeet
{
	UCHAR Header[0x1000];
	stRealSkeet_text Text;
	stRealSkeet_rdata Rdata;
	stRealSkeet_data Data;
	stRealSkeet_retard0 Retard0;
	UCHAR Retard1[0x58D000];
	UCHAR Reloc[0x1000];
	UCHAR Rsrc[0x1000];
	UCHAR Vmpdmp[0x0];
};

#pragma pack(pop)

__declspec(align(16)) extern stRealSkeet RealSkeet;

/* Export Symbols in the .text section */
enum{
	RealSkeet_CodeEnd = 0,
};

/* .retard1 section, RVA range: 0x60A000 - 0xB97000 */
UCHAR* __stdcall RealSkeet_retard1(INT iSymbol);

/* Data for initialization. */
extern UCHAR RealSkeet_InitData[0x0];

extern HMODULE g_hRealSkeet;

/*
	Description: Access any address in the DLL.
	Parameters:
		rvaAddr: The RVA address you want to access.
*/
void* __stdcall RealSkeet_RVA(DWORD rvaAddr);

#define RealSkeet_VA(vaAddr) RealSkeet_RVA((vaAddr) - 0x880000)


#endif // !defined(_REALSKEET_SUPP_H_00B99000_INCLUDED_)