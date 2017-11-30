#include "Pizza.h"
#include <stddef.h>
using namespace std;


Pizza::Pizza() {
    toppingCount = 0;
    toppings = 0;
    currentToppingNum = 0;

}

Pizza::Pizza(int numberOfToppings) {

    initialize(numberOfToppings);
}

Pizza::~Pizza() {

    clean();
}

void Pizza::initialize(int numberOfToppings){

    clean();
    toppingCount = numberOfToppings;
    toppings = new Topping[toppingCount];
    currentToppingNum = 0;
}

void Pizza::clean(){

    if(toppings != 0) {
        delete[] toppings;
        toppingCount = 0;
        toppings = 0;
        currentToppingNum = 0;
    }
}

void Pizza::addTopping(Topping topping) {

    if(currentToppingNum < toppingCount) {
    toppings[currentToppingNum] = topping;
    currentToppingNum++;
    }
}

istream& operator >>(istream& in, Pizza& pizza) {

    int toppingCount;
    in >> toppingCount;
    pizza.initialize(toppingCount);

    Topping topping;
    for(int i = 0; i < pizza.toppingCount; i++) {
        in >> topping;
        pizza.addTopping(topping);
  }

    return in;
}

ostream& operator <<(ostream& out, const Pizza& pizza) {

    out << "Pizza with toppings: " << pizza.toppingCount << endl;

    for(int i = 0; i < pizza.toppingCount; i++) {
        out << pizza.toppings[i] << endl;
  }
    return out;
}
