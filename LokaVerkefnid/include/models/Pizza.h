#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <vector>
#include <string>
#include "PizzaRepository.h"
#include "ToppingsRepository.h"
#include "BaseRepository.h"

using namespace std;

class Pizza {
public:
    Pizza();
    void printPizza();
    void convertPizza();
private:
    vector<string>myPizza;
};
#endif // PIZZA_H
