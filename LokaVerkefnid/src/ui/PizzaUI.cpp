#include "PizzaUI.h"

PizzaUI::PizzaUI()
{
    /*selection = '\0';
    small = 700;
    medium = 900;
    large = 1200;
    skinka = 200;
    pepperoni = 200;
    sveppir = 100;
    laukur = 100;
    bacon = 150;*/
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
    pizza.chooseToppings();
}
