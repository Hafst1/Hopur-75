#include "MainUI.h"

MainUI::MainUI() {
    //ctor
}

void MainUI::startUI() {
    while(true) {
        char selection;
        cout << "------------------------------" << endl;
        cout << "Velkomin/n i PizzaOrganizer!  " << endl;
        cout << "------------------------------" << endl;
        cout << "1. Starfsmadur" << endl;
        cout << "2. Vidskiptavinur" << endl;
        cout << "3. Haetta" << endl;
        cout << ": ";
        cin >> selection;

    if(selection == '1') {
        StaffUI staffui;
        staffui.staff_menu();
    }else if(selection == '2') {
        CustomerUI customerui;
        customerui.customer_menu();
    }else if(selection == '3') {
        exit(0);
    }else {
        cout << "Rangur innslattur!" << endl;
    }
    }
}
