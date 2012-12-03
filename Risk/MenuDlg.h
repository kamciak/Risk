///-----------------------------------------------------------------
///
/// @file      MenuDlg.h
/// @author    Kamciak
/// Created:   2012-12-03 19:50:34
/// @section   DESCRIPTION
///            MenuDlg class declaration
///
///------------------------------------------------------------------

#ifndef __MENUDLG_H__
#define __MENUDLG_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/dialog.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/bmpbuttn.h>
#include <wx/statbmp.h>
////Header Include End
#include <wx/dcbuffer.h>
////Dialog Style Start
#undef MenuDlg_STYLE
#define MenuDlg_STYLE wxTRANSPARENT_WINDOW | wxDIALOG_NO_PARENT
////Dialog Style End

class MenuDlg : public wxDialog
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		MenuDlg(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("MenuDlg"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = MenuDlg_STYLE);
		virtual ~MenuDlg();
		void WxPanel1UpdateUI(wxUpdateUIEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		void MenuDlgActivate(wxActivateEvent& event);
		void WxBitmapButton1Click(wxCommandEvent& event);
		void WxBitmapButton1Click0(wxCommandEvent& event);
	
	private:
		//Do not add custom control declarations between 
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxBitmapButton *WxBitmapButton1;
		wxStaticBitmap *WxStaticBitmap1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXBITMAPBUTTON1 = 1008,
			ID_WXSTATICBITMAP1 = 1007,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
	
	private:
        wxImage ImgBackground, ImgTable, ImgClose;
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
		wxBitmap zamknij;
		
};

#endif
