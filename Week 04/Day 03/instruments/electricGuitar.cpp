//
// Created by vezer on 2019. 04. 24..
//

#include "electricGuitar.h"

ElectricGuitar::ElectricGuitar(int strings) : StringedInstrument(strings, "Electric Guitar" ) {

}
std::string ElectricGuitar::sound(){
    return "Twang";
};

