//
// Created by vezer on 2019. 04. 24..
//

#include "bassGuitar.h"

BassGuitar::BassGuitar(int strings) : StringedInstrument(strings, "bassGuitar") {

}

std::string BassGuitar::sound() {
    return "Duum-duum-duum";;
}
