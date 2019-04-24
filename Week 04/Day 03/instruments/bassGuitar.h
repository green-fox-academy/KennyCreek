//
// Created by vezer on 2019. 04. 24..
//

#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H

#include "stringedInstrument.h"


class BassGuitar : public  StringedInstrument{
public:
    BassGuitar (int strings = 4);
    std::string sound() override ;
};


#endif //INSTRUMENTS_BASSGUITAR_H
