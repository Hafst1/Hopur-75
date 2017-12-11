#include "Toppings.h"

Toppings::Toppings() {
    //ctor
}

void Toppings::displayToppings() {
    cout << "------------------------------" << endl;
    cout << "Alegg                         " << endl;
    cout << "------------------------------" << endl;
    Toppings_Repository printToppings;
    printToppings.printToppings();
}

void Toppings::addToppings() {
    string input;
    int counter = 0;
    cout << "------------------------------" << endl;
    cout << "Stofna nytt alegg (q = haetta)" << endl;
    cout << "------------------------------" << endl;
    while(true) {
        if(counter%2 == 0) {
            cout << "Alegg: ";
            cin >> input;
            if(input == "q") {
                break;
            }else {
            myTopping.push_back(input);
            counter++;
            }
            }
        if(counter%2 == 1) {
            cout << "Verd: ";
            cin >> input;
            if(input == "q") {
                break;
            }else {
                myTopping.push_back(input);
                counter++;
            }
            }
        }
    Toppings_Repository convertToppings;
    convertToppings.convertToppings(myTopping);
}
