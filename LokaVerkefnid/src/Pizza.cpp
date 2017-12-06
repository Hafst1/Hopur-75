#include "Pizza.h"

Pizza::Pizza()
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


void Pizza::chooseSize(){

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

void Pizza::chooseToppings(){

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
