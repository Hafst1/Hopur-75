#include "CustomerUI.h"


CustomerUI::CustomerUI() {
    //ctor
}

void CustomerUI::customer_menu() {
    char selection;
    cout << "------------------------------" << endl;
    cout << "Vidskiptavinur                " << endl;
    cout << "------------------------------" << endl;
    cout << "1. Panta pizzu" << endl;
    cout << "2. Bakka" << endl;
    while(true) {
        cout << ": ";
        cin >> selection;
            if(selection == '1') {
                cout << "Pantadu bara a dominos kjani" << endl;
                break;
            }else if(selection == '2') {
                break;
            }else {
                cout << "Rangur innslattur!" << endl;
            }
        }
}
