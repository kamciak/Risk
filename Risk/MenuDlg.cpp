///-----------------------------------------------------------------
///
/// @file      MenuDlg.cpp
/// @author    Kamciak
/// Created:   2012-12-03 19:50:34
/// @section   DESCRIPTION
///            MenuDlg class implementation
///
///------------------------------------------------------------------

#include "MenuDlg.h"

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
	EVT_ACTIVATE(MenuDlg::MenuDlgActivate)
	EVT_BUTTON(ID_WXBITMAPBUTTON1,MenuDlg::WxBitmapButton1Click0)
END_EVENT_TABLE()
////Event Table End

MenuDlg::MenuDlg(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxDialog(parent, id, title, position, size, style)
{
	CreateGUIControls();
	this->SetBackgroundColour(RGB(192,192,192));
	wxImage::AddHandler( new wxJPEGHandler );
	wxImage::AddHandler( new wxPNGHandler );

	wxImage imageTable("table.jpg");
	wxImage imageScroll("background.png");                      // Tworzymy image wczytujac od razu obrazk z pliku
    if ((!(imageScroll.Ok()))||(!(imageTable.Ok()))) wxMessageBox("Nie uda³o siê za³adowac obrazka");

	wxImage::AddHandler( new wxPNGHandler );
	wxImage imageClose("zamknij.png");

	ImgBackground=imageScroll.Copy();
	ImgTable=imageTable.Copy();
	ImgClose=imageClose.Copy();
	
	
	

	
	
	

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

	wxBitmap WxBitmapButton1_BITMAP (_("zamknij.jpg"), wxBITMAP_TYPE_JPEG);
	WxBitmapButton1 = new wxBitmapButton(this, ID_WXBITMAPBUTTON1, WxBitmapButton1_BITMAP, wxPoint(609, 36), wxSize(94, 20), wxTRANSPARENT_WINDOW | wxNO_BORDER | wxBU_AUTODRAW, wxDefaultValidator, _("WxBitmapButton1"));

	WxStaticBitmap1 = new wxStaticBitmap(this, ID_WXSTATICBITMAP1, wxBitmap(_("C:/Users/Kamciak/Desktop/Risk/MenuDialog/Output/MingW/background.jpg"), wxBITMAP_TYPE_JPEG), wxPoint(0, 0), wxSize(800, 400) );

	SetTitle(_("MenuDlg"));
	SetIcon(wxNullIcon);
	SetSize(8,8,800,400);
	Center();
	
	////GUI Items Creation End
//	WxBitmapButton1 = new wxBitmapButton(WxPanel1, ID_WXBITMAPBUTTON1,wxBitmap(wxT("zamknij.png"), 
  //   wxBITMAP_TYPE_PNG), wxPoint(694, 11), wxSize(94, 20), wxTRANSPARENT_WINDOW | wxNO_BORDER, wxDefaultValidator, _("WxBitmapButton1"));





  //  WxBitmapButton1 = new wxBitmapButton(this, ID_WXBITMAPBUTTON1, wxBitmap(_("zamknij.jpg"), wxBITMAP_TYPE_JPEG), wxPoint(603, 15), wxSize(94, 20), wxTRANSPARENT_WINDOW | wxNO_BORDER | wxBU_AUTODRAW, wxDefaultValidator, _("WxBitmapButton1"));
    WxStaticBitmap1 = new wxStaticBitmap(this, ID_WXSTATICBITMAP1, wxBitmap(_("background.jpg"), wxBITMAP_TYPE_JPEG), wxPoint(0, 0), wxSize(800, 400) );  
    
    this->SetReturnCode(1);
    WxBitmapButton1->SetBitmapHover(wxBitmap(_("zamknij_hover.jpg"), wxBITMAP_TYPE_JPEG));
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


	/*

	zamknij=wxBitmap(ImgClose);
wxBitmap bitmap(ImgBackground);           // Tworzymy tymczasowa bitmape na podstawie Img_Cpy
	wxBitmap bitmap1(ImgTable);           // Tworzymy tymczasowa bitmape na podstawie Img_Cpy
    wxClientDC dc(WxPanel1);   // Pobieramy kontekst okna
    wxBufferedDC bdc (&dc);
    bdc.DrawBitmap(bitmap1, 0, 0, true);  // Rysujemy bitmape na kontekscie urzadzenia
    bdc.DrawBitmap(bitmap, 0, 0, true);  // Rysujemy bitmape na kontekscie urzadzenia*/
  
}

/*
 * MenuDlgActivate
 */
void MenuDlg::MenuDlgActivate(wxActivateEvent& event)
{
	// insert your code here
}



/*
 * WxBitmapButton1Click
 */


/*
 * WxBitmapButton1Click0
 */
void MenuDlg::WxBitmapButton1Click0(wxCommandEvent& event)
{
    wxExit();
	// insert your code here
}
