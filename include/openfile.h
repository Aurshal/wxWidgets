#include <wx/wx.h>
class Openfile :public wxFrame {
public:
    Openfile(wxWindow*);
    void OnOpen(wxCommandEvent& event);
    wxTextCtrl* tc;
    wxMenuBar* menubar;
    wxMenu* file;
};
