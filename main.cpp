#include "main.h"
// #include "simple.h"
#include "icon.h"
#include "button.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit(){
    // Icon *icon = new Icon(wxT("Icon"));
    // icon->Show(true);

    Button *btnapp = new Button(wxT("Button"));
    btnapp->Show(true);
    return true;
}