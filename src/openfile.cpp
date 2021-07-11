#include "openfile.h"

Openfile::Openfile(wxWindow* window) :wxFrame(window, wxID_ANY, "") {
    menubar = new wxMenuBar;
    file = new wxMenu;
    file->Append(wxID_OPEN, wxT("&Open"));
    menubar->Append(file, wxT("&File"));

    Connect(wxID_OPEN, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(Openfile::OnOpen));
    tc = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1), wxSize(-1, -1), wxTE_MULTILINE);

}

void Openfile::OnOpen(wxCommandEvent& event) {
    wxFileDialog* openFileDialog = new wxFileDialog(this);
    if (openFileDialog->ShowModal() == wxID_OK) {
        wxString fileName = openFileDialog->GetPath();
        tc->LoadFile(fileName);
    }
}