#include "PizzaUI.h"

PizzaUI::PizzaUI()
{

}


void PizzaUI::choosePizza(){
    cout << "Choose Size:" << endl;
    cout << "1: Small" << endl;
    cout << "2: Medium" << endl;
    cout << "3: Large" << endl;

    Pizza pizza;
    pizza.chooseSize();

    cout << "1: Skinka" << endl;
    cout << "2: Pepperoni" << endl;
    cout << "3: Laukur" << endl;
    cout << "4: Beikon" << endl;
    cout << "5: Sveppir" << endl;
    cout << "q: quit" << endl;
    pizza.chooseToppings(myVector);
}
