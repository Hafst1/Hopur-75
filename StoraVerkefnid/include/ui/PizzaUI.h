#ifndef PIZZAUI_H
#define PIZZAUI_H
#include<iostream>

using namespace std;

class PizzaUI
{
    public:
        PizzaUI();
        void chooseSize();
        void chooseToppings();

    private:
        char selection;
        int small;
        int medium;
        int large;

        int skinka;
        int pepperoni;
        int sveppir;
        int laukur;
        int bacon;
};

#endif // PIZZAUI_H
