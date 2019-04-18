//
// Created by vezer on 2019. 04. 18..
//

#include "counter.h"

Counter::Counter(int num) {
    _num1 = num;
    _initialvalue = num;
}



void Counter::add(int added){
    _num1 += added;
}

int Counter::get(){
    return _num1;

}

void Counter::reset(){
    _num1 = _initialvalue;
}
