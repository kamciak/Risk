///-----------------------------------------------------------------
///
/// @file      MenuDlg.cpp
/// @author    Kamciak
/// Created:   2012-12-04 01:56:54
/// @section   DESCRIPTION
///            MenuDlg class implementation
///
///------------------------------------------------------------------

#include "MenuDlg.h"
#include <wx/dcbuffer.h>
//Do not add custom headers
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// MenuDlg
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(MenuDlg,wxDialog)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(MenuDlg::OnClose)
	EVT_BUTTON(ID_WXBUTTON1,MenuDlg::WxButton1Click)
	EVT_BUTTON(ID_WXBITMAPBUTTON1,MenuDlg::WxBitmapButton1Click)
	
	EVT_UPDATE_UI(ID_WXPANEL1,MenuDlg::WxPanel1UpdateUI)
END_EVENT_TABLE()
////Event Table End

MenuDlg::MenuDlg(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxDialog(parent, id, title, position, size, style)
{
	CreateGUIControls();

}

MenuDlg::~MenuDlg()
{
} 

void MenuDlg::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End.
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	wxInitAllImageHandlers();   //Initialize graphic format handlers

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(0, 0), wxSize(800, 400));

	WxCheckBox1 = new wxCheckBox(WxPanel1, ID_WXCHECKBOX1, _("WxCheckBox1"), wxPoint(186, 107), wxSize(97, 17), 0, wxDefaultValidator, _("WxCheckBox1"));

	wxBitmap WxBitmapButton1_BITMAP (_("zamknij.jpg"), wxBITMAP_TYPE_JPEG);
	WxBitmapButton1 = new wxBitmapButton(WxPanel1, ID_WXBITMAPBUTTON1, WxBitmapButton1_BITMAP, wxPoint(578, 34), wxSize(94, 20), wxBU_AUTODRAW, wxDefaultValidator, _("WxBitmapButton1"));

	WxButton1 = new wxButton(WxPanel1, ID_WXBUTTON1, _("Start"), wxPoint(342, 337), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton1"));

	SetTitle(_("MenuDlg"));
	SetIcon(wxNullIcon);
	SetSize(122,17,800,400);
	Center();
	
	////GUI Items Creation End
	

	
/*	wxMemoryDC mem_dc;  
    mem_dc.SelectObject(tlo); 
   //  mem_dc.SetBackground(wxBrush("WHITE"));  
     mem_dc.Clear();
     wxClientDC dc(WxPanel1);
     dc.Blit(0,0,800,400,&mem_dc,0,0);
*/	
    this->SetReturnCode(1);
	wxImage imageHover("zamknij_hover.jpg");
	wxBitmap zamknij_hover(imageHover);
	WxBitmapButton1->SetBitmapHover(zamknij_hover);
}

void MenuDlg::OnClose(wxCloseEvent& /*event*/)
{
	Destroy();
}

/*
 * WxPanel1UpdateUI
 */
void MenuDlg::WxPanel1UpdateUI(wxUpdateUIEvent& event)
{
    

			wxImage::AddHandler( new wxJPEGHandler );
	wxImage image("background.jpg");
	wxBitmap tlo(image);
	wxClientDC dc(WxPanel1);
	wxBufferedDC bdc(&dc);
	bdc.DrawBitmap(tlo,0,0,true);
	

}

/*
 * WxBitmapButton1Click
 */
void MenuDlg::WxBitmapButton1Click(wxCommandEvent& event)
{
	wxExit();
}

/*
 * WxButton1Click
 */
void MenuDlg::WxButton1Click(wxCommandEvent& event)
{
	EndModal(1);
}
