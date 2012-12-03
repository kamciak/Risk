///-----------------------------------------------------------------
///
/// @file      MenuDialog.h
/// @author    Kamciak
/// Created:   2012-12-03 19:02:46
/// @section   DESCRIPTION
///            MenuDialog class declaration
///
///------------------------------------------------------------------

#ifndef __MENUDIALOG_H__
#define __MENUDIALOG_H__

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
#include <wx/panel.h>
////Header Include End

////Dialog Style Start
#undef MenuDialog_STYLE
#define MenuDialog_STYLE wxCAPTION | wxSYSTEM_MENU | wxDIALOG_NO_PARENT | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class MenuDialog : public wxDialog
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		MenuDialog(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("MenuDialog"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = MenuDialog_STYLE);
		virtual ~MenuDialog();
		void MenuDialogActivate(wxActivateEvent& event);
		void WxPanel1UpdateUI(wxUpdateUIEvent& event);
	
	private:
		//Do not add custom control declarations between 
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxPanel *WxPanel1;
		////GUI Control Declaration End

		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXPANEL1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
	
	private:
        wxImage ImgBackground;
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
