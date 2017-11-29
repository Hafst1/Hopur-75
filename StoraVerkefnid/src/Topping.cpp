#include <string.h>
#include "Topping.h"

Topping::Topping()
{
    //ctor
}

Topping::Topping(char *name, double price){

    strcpy(this->name, name);
    this->price = price;
}

Topping::~Topping()
{
    //dtor
}
