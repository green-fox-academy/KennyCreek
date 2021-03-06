//
// Created by vezer on 2019. 04. 24..
//

#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H

#include "instrument.h"

class StringedInstrument : public Instrument{

public:
    StringedInstrument(int numberofstrings, std::string instname);

    virtual std::string sound() = 0;

    void play() override;

private:
    int _numberofStrings;
};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
