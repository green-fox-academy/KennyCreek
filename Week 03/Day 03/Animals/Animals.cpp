//
// Created by vezer on 2019. 04. 17..
//

#include "Animals.h"

Animals::Animals(int hunger, int thirst) {
    Animals::_hunger = hunger;
    Animals::_thirst = thirst;
}

void Animals::eat() {
     _hunger--;
}

void Animals::drink(){
    _thirst--;
}

void Animals::play(){
    _hunger++;
    _thirst++;
}

int Animals::getHunger(){
    return _hunger;
}

int Animals::getThirst(){
    return _thirst;
}

int Animals::getPlay(){
    return _thirst, _hunger;
}


