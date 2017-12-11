#ifndef TOPPINGS_H
#define TOPPINGS_H
#include <iostream>
#include <vector>
#include <string>
#include "ToppingsRepository.h"

using namespace std;

class Toppings {
public:
    Toppings();
    void displayToppings();
    void addToppings();
private:
    vector<string>myTopping;
};



#endif // TOPPINGS_H
