#include "Pizza.h"

Pizza::Pizza()
{
    price = 0;
    toppings = 0;
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
        price = small;
        cout << "Small: " << price << "kr" << endl;
    }
    else if (selection == '2'){
        price = medium;
        cout << "Medium: " << price << "kr" << endl;
    }
    else if (selection == '3'){
        price = large;
        cout << "Large: " << price << "kr" << endl;
    }
    else {
        cout << "invalid input!" << endl;
    }
}

void Pizza::chooseToppings(){

    while (selection != 'q'){

        cin >> selection;
        if(selection == '1') {
            price += skinka;
            toppings++;
        }
        if(selection == '2') {
            price += pepperoni;
            toppings++;
        }
        if(selection == '3') {
            price += laukur;
            toppings++;
        }
        if(selection == '4') {
            price += bacon;
            toppings++;
        }
        if(selection == '5'){
            price += sveppir;
            toppings++;
        }
    }
    cout << "Pizza with " << toppings << " toppings: " << price << "kr";
}
