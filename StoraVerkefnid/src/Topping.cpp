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

ostream& operator << (ostream& out, const Topping& topping){

    out << topping.name << " " << topping.price;

    return out;
}

/*istream& operator >> (istream& in, Topping& topping){

    cout << "How many topings do you want: ";


    return in;
}*/
