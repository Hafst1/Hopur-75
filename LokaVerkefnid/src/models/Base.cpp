#include "Base.h"

Base::Base() {
    //ctor
}

void Base::displayBase() {
    cout << "------------------------------" << endl;
    cout << "Verd a botnum                 " << endl;
    cout << "------------------------------" << endl;
    Base_Repository printbase;
    printbase.printBase();
}

void Base::changeBase() {
    string input;
    cout << "------------------------------" << endl;
    cout << "Breyta verdi a botnum         " << endl;
    cout << "------------------------------" << endl;
    cout << "Litill botn: ";
    cin >> input;
    myBase.push_back(input);
    cout << "Midju botn: ";
    cin >> input;
    myBase.push_back(input);
    cout << "Stor botn: ";
    cin >> input;
    myBase.push_back(input);

    Base_Repository convertbase;
    convertbase.convertBase(myBase);
}
