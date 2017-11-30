#include "PizzaRepository.h"
#include <fstream>


PizzaRepository::PizzaRepository()
{
    //ctor
}

PizzaRepository::~PizzaRepository()
{
    //dtor
}

void PizzaRepository::storePizza(const Pizza& pizza) {

    ofstream fout;
    fout.open("pizzas.txt", ios::app);

    fout << pizza;

    fout.close();
}

Pizza PizzaRepository::retrivePizza() {

    ifstream fin("pizzas.txt");

    Pizza pizza;

    if (fin.is_open()) {
        cout << fin.rdbuf();
    }

    fin.close();

    return pizza;

}

