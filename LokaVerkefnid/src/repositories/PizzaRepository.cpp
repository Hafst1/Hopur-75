#include "PizzaRepository.h"

Pizza_Repository::Pizza_Repository() {
    //ctor
}

void Pizza_Repository::printPizza() {
    ifstream fin;
    fin.open("pizza.txt");
    while(!fin.eof()) {
        getline(fin, str);
        displayPizza.push_back(str);
    }
    fin.close();

    for(unsigned int i = 0; i < displayPizza.size(); i++) {
        cout << displayPizza[i] << endl;
    }
}

void Pizza_Repository::convertPizza(vector<string>& newMyPizza) {
    ofstream fout;
    fout.open("pizza.txt", ios::app);
    for(unsigned int i = 0; i < newMyPizza.size(); i++) {
        fout << newMyPizza[i] << endl;
    }
    fout.close();

}
