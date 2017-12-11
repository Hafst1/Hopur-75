#include "BaseRepository.h"

Base_Repository::Base_Repository() {
    //ctor
}

void Base_Repository::printBase() {
    ifstream fin;
    fin.open("bases.txt");
    while(!fin.eof()) {
        getline(fin, str);
        displayBase.push_back(str);
    }
    fin.close();

    cout << "Litill botn:  " << displayBase[0] << " kr." << endl;
    cout << "Midju botn: " << displayBase[1] << " kr." << endl;
    cout << "Stor botn:  " << displayBase[2] << " kr." << endl;
}

void Base_Repository::convertBase(vector<string>& newMyBase) {
    ofstream fout;
    fout.open("bases.txt", ofstream::trunc);
    fout.close();
    fout.open("bases.txt", ios::app);
    for(unsigned int i = 0; i < newMyBase.size(); i++) {
        fout << newMyBase[i] << endl;
    }
    fout.close();
}
