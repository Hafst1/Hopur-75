#ifndef BASEREPOSITORY_H
#define BASEREPOSITORY_H
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "Base.h"

using namespace std;

class Base_Repository {
public:
    Base_Repository();
    void printBase();
    void convertBase(vector<string>& newMyBase);
private:
    vector<string>displayBase;
    string str;
};
#endif // BASEREPOSITORY_H
