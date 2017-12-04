#include "MainUI.h"

MainUI::MainUI()
{
    //ctor
}

void MainUI::startUI(){

    cout << "Please select: " << endl;
    cout << "1: Make pizza" << endl;

    char selection;
    cin >> selection;

    if(selection == '1'){
        PizzaUI pizzaui;
        pizzaui.chooseSize();
        pizzaui.chooseToppings();
    }
}
