#include "PizzaUI.h"

PizzaUI::PizzaUI()
{
    selection = '\0';
    small = 700;
    medium = 900;
    large = 1200;
    skinka = 200;
    pepperoni = 200;
    sveppir = 100;
    laukur = 100;
    bacon = 150;
}


void PizzaUI::chooseSize(){
    //char selection;
    cout << "Choose Size:" << endl;
    cout << "1: Small" << endl;
    cout << "2: Medium" << endl;
    cout << "3: Large" << endl;

    cin >> selection;

    if (selection == '1'){

    }
    else if (selection == '2'){

    }
    else if (selection == '3'){

    }
    else {
        cout << "invalid input!" << endl;
    }
}

void PizzaUI::chooseToppings(){

    cout << "1: Skinka" << endl;
    cout << "2: Pepperoni" << endl;
    cout << "3: Laukur" << endl;
    cout << "4: Beikon" << endl;
    cout << "5: Sveppir" << endl;
    cout << "q: quit" << endl;


    while (selection != 'q'){

        cin >> selection;
        if(selection == '1') {
            //tmpPizza += 200;
            //tempTop++;
        }
        if(selection == '2') {
            //tmpPizza += 200;
            //tempTop++;
        }
        if(selection == '3') {
            //tmpPizza += 100;
            //tempTop++;
        }
        if(selection == '4') {
            //tmpPizza += 150;
            //tempTop++;
        }
        if(selection == '5'){
            //tmpPizza += 100;
        }
    }

}
