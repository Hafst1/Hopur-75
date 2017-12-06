#ifndef PIZZA_H
#define PIZZA_H
#include <fstream>
#include <iostream>

using namespace std;

class Pizza
{
    public:
        Pizza();
        void chooseSize();
        void chooseToppings();


    private:
        int price;
        int toppings;
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

#endif // PIZZA_H
