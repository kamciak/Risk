///-----------------------------------------------------------------
///
/// @file      MenuDialog.cpp
/// @author    Kamciak
/// Created:   2012-12-03 19:02:46
/// @section   DESCRIPTION
///            MenuDialog class implementation
///
///------------------------------------------------------------------

#include "MenuDialog.h"

//Do not add custom headers
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// MenuDialog
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(MenuDialog,wxDialog)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(MenuDialog::OnClose)
	EVT_ACTIVATE(MenuDialog::MenuDialogActivate)
END_EVENT_TABLE()
////Event Table End

MenuDialog::MenuDialog(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxDialog(parent, id, title, position, size, style)
{
	CreateGUIControls();
	
    this->SetBackgroundColour(RGB(192,192,192));
	wxImage::AddHandler( new wxJPEGHandler );       // Dodajemy handlery do formatow
	wxImage image("background.jpg");                      // Tworzymy image wczytujac od razu obrazk z pliku
    if (!image.Ok()) wxMessageBox("Nie uda³o siê za³adowac obrazka");
	ImgBackground=image.Copy();
	
}

MenuDialog::~MenuDialog()
{
} 

void MenuDialog::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End.
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(0, 1), wxSize(535, 337));

	SetTitle(_("MenuDialog"));
	SetIcon(wxNullIcon);
	SetSize(190,73,551,376);
	Center();
	
	////GUI Items Creation End

}

void MenuDialog::OnClose(wxCloseEvent& /*event*/)
{
	Destroy();
}

/*
 * MenuDialogActivate
 */
void MenuDialog::MenuDialogActivate(wxActivateEvent& event)
{
	// insert your code here
}

/*
 * WxPanel1UpdateUI
 */
void MenuDialog::WxPanel1UpdateUI(wxUpdateUIEvent& event)
{
	wxBitmap bitmap(ImgBackground);           // Tworzymy tymczasowa bitmape na podstawie Img_Cpy
    wxClientDC dc(WxPanel1);   // Pobieramy kontekst okna
    dc.DrawBitmap(bitmap, 0, 0, true);  // Rysujemy bitmape na kontekscie urzadzenia
}
