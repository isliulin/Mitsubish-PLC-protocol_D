// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "_coolbar.h"

// Dispatch interfaces referenced by this interface
#include "Picture.h"
#include "_bands.h"

/////////////////////////////////////////////////////////////////////////////
// C_CoolBar

IMPLEMENT_DYNCREATE(C_CoolBar, CWnd)

/////////////////////////////////////////////////////////////////////////////
// C_CoolBar properties

/////////////////////////////////////////////////////////////////////////////
// C_CoolBar operations

void C_CoolBar::SetRefPicture(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x68030013, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

CPicture C_CoolBar::GetPicture()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x68030013, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPicture(pDispatch);
}

void C_CoolBar::SetForeColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030012, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long C_CoolBar::GetForeColor()
{
	unsigned long result;
	InvokeHelper(0x68030012, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetBackColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030011, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long C_CoolBar::GetBackColor()
{
	unsigned long result;
	InvokeHelper(0x68030011, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetEmbossHighlight(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030010, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long C_CoolBar::GetEmbossHighlight()
{
	unsigned long result;
	InvokeHelper(0x68030010, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetEmbossShadow(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6803000f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long C_CoolBar::GetEmbossShadow()
{
	unsigned long result;
	InvokeHelper(0x6803000f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetEmbossPicture(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6803000e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL C_CoolBar::GetEmbossPicture()
{
	BOOL result;
	InvokeHelper(0x6803000e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

C_Bands C_CoolBar::GetBands()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x6803000d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return C_Bands(pDispatch);
}

long C_CoolBar::GetRowCount()
{
	long result;
	InvokeHelper(0x6803000c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetRefImageList(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6803000b, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH C_CoolBar::GetImageList()
{
	LPDISPATCH result;
	InvokeHelper(0x6803000b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetFixedOrder(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6803000a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL C_CoolBar::GetFixedOrder()
{
	BOOL result;
	InvokeHelper(0x6803000a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetBandBorders(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x68030009, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL C_CoolBar::GetBandBorders()
{
	BOOL result;
	InvokeHelper(0x68030009, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetVariantHeight(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x68030008, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL C_CoolBar::GetVariantHeight()
{
	BOOL result;
	InvokeHelper(0x68030008, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetOrientation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030007, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long C_CoolBar::GetOrientation()
{
	long result;
	InvokeHelper(0x68030007, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long C_CoolBar::GetOLEDropMode()
{
	long result;
	InvokeHelper(0x68030006, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetOLEDropMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030006, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL C_CoolBar::GetEnabled()
{
	BOOL result;
	InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetEnabled(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long C_CoolBar::GetHwnd()
{
	long result;
	InvokeHelper(DISPID_HWND, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CPicture C_CoolBar::GetMouseIcon()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x68030005, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPicture(pDispatch);
}

void C_CoolBar::SetRefMouseIcon(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x68030005, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

long C_CoolBar::GetMousePointer()
{
	long result;
	InvokeHelper(0x68030004, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_CoolBar::SetMousePointer(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030004, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void C_CoolBar::OLEDrag()
{
	InvokeHelper(0x60030014, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void C_CoolBar::Refresh()
{
	InvokeHelper(DISPID_REFRESH, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}