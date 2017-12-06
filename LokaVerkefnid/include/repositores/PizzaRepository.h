#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "Pizza.h"
#include <iostream>

using namespace std;

class PizzaRepository
{
    public:
        PizzaRepository();
        void storePizza(const Pizza& pizza);

    private:
};

#endif // PIZZAREPOSITORY_H
