///-----------------------------------------------------------------
///
/// @file      RiskFrm.cpp
/// @author    Piotrek
/// Created:   2012-10-19 20:31:21
/// @section   DESCRIPTION
///            RiskFrm class implementation
///
///------------------------------------------------------------------

#include "RiskFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// RiskFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(RiskFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(RiskFrm::OnClose)
END_EVENT_TABLE()
////Event Table End

RiskFrm::RiskFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

RiskFrm::~RiskFrm()
{
}

void RiskFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxBoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	this->SetSizer(WxBoxSizer1);
	this->SetAutoLayout(true);

	SetTitle(_("Risk"));
	SetIcon(wxNullIcon);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
		menu = new MenuDlg(this);
	 menu->ShowModal();
}

void RiskFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click
 */
void RiskFrm::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
	menu = new MenuDlg(this);

	 menu->ShowModal();

}
