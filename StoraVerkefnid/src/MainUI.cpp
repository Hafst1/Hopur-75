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

        cout << "p: make pizza" << endl;
        cout << "w: write" << endl;
        cout << "r: read" << endl;
        cout << "q: quit" << endl;

        cin >> selection;

        if (selection == 'p'){
            PizzaUI pizzaui;
            pizzaui.startUI();
        }
        if (selection == 'w'){


        }
        else if (selection == 'r'){


        }
    }

}
