#ifndef PIZZAUI_H
#define PIZZAUI_H
#include<iostream>
#include "Pizza.h"

using namespace std;

class PizzaUI
{
    public:
        PizzaUI();
        void choosePizza();

    private:
        vector <string> myVector;
};

#endif // PIZZAUI_H
