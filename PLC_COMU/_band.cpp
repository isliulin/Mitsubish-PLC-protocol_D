// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "_band.h"


/////////////////////////////////////////////////////////////////////////////
// C_Band properties

/////////////////////////////////////////////////////////////////////////////
// C_Band operations

void C_Band::SetBackColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030024, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long C_Band::GetBackColor()
{
	unsigned long result;
	InvokeHelper(0x68030024, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_Band::SetForeColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030023, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long C_Band::GetForeColor()
{
	unsigned long result;
	InvokeHelper(0x68030023, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_Band::SetCaption(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x68030022, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString C_Band::GetCaption()
{
	CString result;
	InvokeHelper(0x68030022, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void C_Band::SetImage(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x68030021, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT C_Band::GetImage()
{
	VARIANT result;
	InvokeHelper(0x68030021, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void C_Band::SetRefPicture(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x68030020, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT C_Band::GetPicture()
{
	VARIANT result;
	InvokeHelper(0x68030020, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long C_Band::GetPosition()
{
	long result;
	InvokeHelper(0x6803001f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long C_Band::GetIndex()
{
	long result;
	InvokeHelper(0x6803001e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_Band::SetKey(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6803001d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString C_Band::GetKey()
{
	CString result;
	InvokeHelper(0x6803001d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void C_Band::SetNewRow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6803001c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL C_Band::GetNewRow()
{
	BOOL result;
	InvokeHelper(0x6803001c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void C_Band::SetVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6803001b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL C_Band::GetVisible()
{
	BOOL result;
	InvokeHelper(0x6803001b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void C_Band::SetStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6803001a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long C_Band::GetStyle()
{
	long result;
	InvokeHelper(0x6803001a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_Band::SetTag(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x68030019, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT C_Band::GetTag()
{
	VARIANT result;
	InvokeHelper(0x68030019, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void C_Band::SetAllowVertical(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x68030018, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL C_Band::GetAllowVertical()
{
	BOOL result;
	InvokeHelper(0x68030018, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void C_Band::SetMinWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x68030017, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float C_Band::GetMinWidth()
{
	float result;
	InvokeHelper(0x68030017, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void C_Band::SetMinHeight(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x68030016, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float C_Band::GetMinHeight()
{
	float result;
	InvokeHelper(0x68030016, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void C_Band::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x68030015, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float C_Band::GetWidth()
{
	float result;
	InvokeHelper(0x68030015, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void C_Band::SetRefChild(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x68030014, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH C_Band::GetChild()
{
	LPDISPATCH result;
	InvokeHelper(0x68030014, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

float C_Band::GetHeight()
{
	float result;
	InvokeHelper(0x68030013, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void C_Band::SetFixedBackground(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x68030012, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL C_Band::GetFixedBackground()
{
	BOOL result;
	InvokeHelper(0x68030012, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void C_Band::SetEmbossPicture(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x68030011, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL C_Band::GetEmbossPicture()
{
	BOOL result;
	InvokeHelper(0x68030011, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void C_Band::SetEmbossHighlight(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030010, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long C_Band::GetEmbossHighlight()
{
	unsigned long result;
	InvokeHelper(0x68030010, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_Band::SetEmbossShadow(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6803000f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long C_Band::GetEmbossShadow()
{
	unsigned long result;
	InvokeHelper(0x6803000f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_Band::SetUseCoolbarPicture(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6803000e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL C_Band::GetUseCoolbarPicture()
{
	BOOL result;
	InvokeHelper(0x6803000e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void C_Band::SetUseCoolbarColors(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6803000d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL C_Band::GetUseCoolbarColors()
{
	BOOL result;
	InvokeHelper(0x6803000d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}
