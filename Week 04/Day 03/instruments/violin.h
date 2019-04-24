//
// Created by vezer on 2019. 04. 24..
//

#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H

#include "stringedInstrument.h"

class Violin : public StringedInstrument{
public:
    Violin(int strings = 4);
    std::string sound() override ;
};


#endif //INSTRUMENTS_VIOLIN_H
