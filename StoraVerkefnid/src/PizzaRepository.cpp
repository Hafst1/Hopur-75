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
    fout.open("pizzas.txt");

    fout << pizza;

    fout.close();
}

Pizza PizzaRepository::retrivePizza() {

    ifstream fin;
    fin.open("pizzas.txt");

    Pizza pizza;
    fin >> pizza;

    fin.close();

    return pizza;

}
