#include "CustomerUI.h"


CustomerUI::CustomerUI() {
    //ctor
}

void CustomerUI::customer_menu() {
    while(true) {
    char selection;
    cout << "------------------------------" << endl;
    cout << "Vidskiptavinur                " << endl;
    cout << "------------------------------" << endl;
    cout << "1. Panta pizzu" << endl;
    cout << "2. Sja pantadar pizzur" << endl;
    cout << "2. Til baka" << endl;

        cout << ": ";
        cin >> selection;
            if(selection == '1') {
                Pizza convertpizza;
                convertpizza.convertPizza();
            }else if(selection == '2') {
                Pizza printpizza;
                printpizza.printPizza();
            }else if(selection == '3') {
                break;
            }else {
                cout << "Rangur innslattur!" << endl;
        }
    }
}
