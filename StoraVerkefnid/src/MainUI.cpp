#include "MainUI.h"

MainUI::MainUI()
{
    //ctor
}

MainUI::~MainUI()
{
    //dtor
}

void MainUI::startUI(){

    char selection = '\0';

    while (selection != 'q'){

        cout << "m: make pizza" << endl;
        cout << "e: edit toppings" << endl;
        cout << "d: display pizza" << endl;
        cout << "q: quit" << endl;

        cin >> selection;

        if (selection == 'm'){
            PizzaUI pizzaui;
            pizzaui.startUI();
        cout << endl;
        }
        if (selection == 'e'){

        cout << endl;
        }
        else if (selection == 'd'){

        cout << "Display ordered pizzas: " << endl;
        }
    }

}
