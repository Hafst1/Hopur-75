#ifndef PIZZA_H
#define PIZZA_H
#include "Topping.h"
#include <iostream>

using namespace std;

class Pizza
{
    public:
        Pizza();
        Pizza(int numberOfToppings);
        virtual ~Pizza();

        void initialize(int numberOfToppings);
        void addTopping(Topping topping);
        void clean();

    friend istream& operator >>(istream& in, Pizza& pizza);
    friend ostream& operator <<(ostream& out, const Pizza& pizza);

    protected:

    private:
        Topping *toppings;
        int toppingCount;

        int currentToppingNum;
};

#endif // PIZZA_H
