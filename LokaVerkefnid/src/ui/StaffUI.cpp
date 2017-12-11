#include "StaffUI.h"

StaffUI::StaffUI() {
    //ctor
}

void StaffUI::staff_menu() {
    while(true) {
        char selection;
        cout << "------------------------------" << endl;
        cout << "Starfsmadur                   " << endl;
        cout << "------------------------------" << endl;
        cout << "1. Alegg" << endl;
        cout << "2. Botn" << endl;
        cout << "3. Bakka" << endl;
        cout << ": ";
        cin >> selection;
        if(selection == '1') {
            while(true) {
            cout << "------------------------------" << endl;
            cout << "Alegg                         " << endl;
            cout << "------------------------------" << endl;
            cout << "1. Stofna nytt alegg" << endl;
            cout << "2. Sja alegg" << endl;
            cout << "3. Bakka" << endl;
            cout << ": ";
            cin >> selection;
            if(selection == '1') {
                Toppings addToppings;
                addToppings.addToppings();
            }else if(selection == '2') {
                Toppings displaytoppings;
                displaytoppings.displayToppings();
            }else if(selection == '3') {
                break;
            }else{
                cout << "Rangur innslattur!" << endl; }
            }
        }else if(selection == '2') {
            while(true) {
            cout << "------------------------------" << endl;
            cout << "Botnar                        " << endl;
            cout << "------------------------------" << endl;
            cout << "1. Breyta verdi a botnum" << endl;
            cout << "2. Sja verd a botnum" << endl;
            cout << "3. Bakka" << endl;
            cout << ": ";
            cin >> selection;
            if(selection == '1') {
                Base changebase;
                changebase.changeBase();
            }else if(selection == '2') {
                Base displaybase;
                displaybase.displayBase();
            }else if(selection == '3') {
                break;
            }else {
                cout << "Rangur innslattur!" << endl; }
            }
        }else if(selection == '3') {
            break;
        }else {
            cout << "Rangur innslattur!" << endl; }
    }
}
