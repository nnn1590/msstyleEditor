#include "HelpDialog.h"
#include "resource.h"

#ifdef __MINGW32__
#ifndef  MAKEINTRESOURCE
#define MAKEINTRESOURCE(i) ((LPSTR)((ULONG_PTR)(i)))
#endif

// https://docs.microsoft.com/en-us/windows/win32/menurc/resource-types
// https://github.com/MicrosoftDocs/win32/blob/docs/desktop-src/menurc/resource-types.md
// CC BY 4.0 (https://github.com/MicrosoftDocs/win32/blob/docs/LICENSE)
#ifndef  RT_HTML
#define RT_HTML MAKEINTRESOURCE(23)
#endif
#endif  // __MINGW32__


#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>

HelpDialog::HelpDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer(wxVERTICAL);

	helpBox = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY | wxTE_MULTILINE | wxNO_BORDER);
	bSizer6->Add(helpBox, 1, wxALL | wxEXPAND, 5);


	this->SetSizer(bSizer6);
	this->Layout();

	this->Centre(wxBOTH);


	HRSRC hResLic = FindResource(NULL, MAKEINTRESOURCE(IDR_LICENSE), RT_HTML);
	hResLicData = LoadResource(NULL, hResLic);
	char* license = (char*)LockResource(hResLicData);

	HRSRC hResCaps = FindResource(NULL, MAKEINTRESOURCE(IDR_CAPS), RT_HTML);
	hResCapsData = LoadResource(NULL, hResCaps);
	char* caps = (char*)LockResource(hResCapsData);

	helpBox->AppendText(license);
	helpBox->AppendText(caps);
}

HelpDialog::~HelpDialog()
{
	UnlockResource(hResLicData);
	UnlockResource(hResCapsData);
}
