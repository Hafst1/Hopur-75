#include "Pizza.h"

Pizza::Pizza() {
    //ctor
}

void Pizza::printPizza() {
    cout << "------------------------------" << endl;
    cout << "Sja pantadar pizzur           " << endl;
    cout << "------------------------------" << endl;
    Pizza_Repository displaypizza;
    displaypizza.printPizza();
}

void Pizza::convertPizza() {
    string input;
    cout << "------------------------------" << endl;
    cout << "Panta pizzu                   " << endl;
    cout << "------------------------------" << endl;
    cout << "Velja staerd:" << endl;
    cout << "1. Litil" << endl;
    cout << "2. Midstaerd" << endl;
    cout << "3. Stor" << endl;
    cout << ": ";
    cin >> input;
    myPizza.push_back(input);
    cout << "Veldu alegg:" << endl;
    Toppings_Repository printToppings;
    printToppings.printToppings();



    Pizza_Repository convertpizza;
    convertpizza.convertPizza(myPizza);
}
