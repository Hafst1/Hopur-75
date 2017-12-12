#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "Pizza.h"

using namespace std;

class Pizza_Repository {
public:
    Pizza_Repository();
    void printPizza();
    void convertPizza(vector<string>& newMyPizza);
private:
    vector<string>displayPizza;
    string str;
};
#endif // PIZZAREPOSITORY_H
