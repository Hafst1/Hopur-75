#ifndef BASE_H
#define BASE_H
#include <iostream>
#include <vector>
#include <string>
#include "BaseRepository.h"

using namespace std;

class Base {
public:
    Base();
    void changeBase();
    void displayBase();
private:
    vector<string>myBase;
};
#endif // BASE_H
