#ifndef TOPPINGSREPOSITORY_H
#define TOPPINGSREPOSITORY_H
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "Toppings.h"

using namespace std;

class Toppings_Repository {
public:
    Toppings_Repository();
    void printToppings();
    void convertToppings(vector<string>& newMyTopping);
private:
    vector<string>displayToppings;
    string str;
};

#endif // TOPPINGSREPOSITORY_H
