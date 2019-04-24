//
// Created by vezer on 2019. 04. 24..
//

#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H

#include <iostream>
#include "stringedInstrument.h"


class ElectricGuitar : public StringedInstrument{
public:
    ElectricGuitar(int strings = 6);
    std::string sound() override;
};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
