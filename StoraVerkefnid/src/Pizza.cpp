#include "Pizza.h"
#include <stddef.h>
using namespace std;


Pizza::Pizza() {
    toppingCount = 0;
    toppings = NULL;
    currentToppingNum = 0;

}

Pizza::Pizza(int numberOfToppings) {
    toppingCount = numberOfToppings;
    toppings = new Topping[toppingCount];
    currentToppingNum = 0;
}

Pizza::~Pizza() {

    if(toppings != NULL) {
        delete[] toppings;
    }
}

void Pizza::addTopping(Topping topping) {

    if(currentToppingNum < toppingCount) {
    toppings[currentToppingNum] = topping;
    currentToppingNum++;
    }
}
istream& operator >>(istream& in, Pizza& pizza) {


    return in;
}
ostream& operator <<(ostream& out, const Pizza& pizza) {

    out << "Pizza with toppings:" << endl;
    for(int i = 0; i < pizza.toppingCount; i++) {
        out << pizza.toppings[i] << endl;
  }
    return out;
}
