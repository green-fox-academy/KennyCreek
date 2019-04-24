//
// Created by vezer on 2019. 04. 24..
//

#include "stringedInstrument.h"


StringedInstrument::StringedInstrument(int numberofstrings, std::string instname) {
    _numberofStrings = numberofstrings;
    name = instname;

}

void StringedInstrument::play() {
    std::cout << name << ", a " << _numberofStrings <<" -stringed instrument that goes " << sound()<<std::endl;
}
