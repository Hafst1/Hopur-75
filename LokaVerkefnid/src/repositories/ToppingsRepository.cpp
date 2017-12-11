#include "ToppingsRepository.h"

Toppings_Repository::Toppings_Repository() {
    //ctor
}

void Toppings_Repository::printToppings() {
    ifstream fin;
    fin.open("toppings.txt");
    while(!fin.eof()) {
        getline(fin, str);
        displayToppings.push_back(str);
    }
    fin.close();
    for(unsigned int i = 0; i < displayToppings.size(); i++) {
        if(i%2 == 0) {
            cout << displayToppings[i] << " ";
        }
        if(i%2 == 1) {
            cout << displayToppings[i] << " kr." << endl;
        }
    }
}

void Toppings_Repository::convertToppings(vector<string>& newMyTopping) {
    ofstream fout;
    fout.open("toppings.txt", ios::app);
    for(unsigned int i = 0; i < newMyTopping.size(); i++) {
        fout << endl << newMyTopping[i];
}
    fout.close();
}
