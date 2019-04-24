//
// Created by vezer on 2019. 04. 24..
//

#include "violin.h"

Violin::Violin(int strings) : StringedInstrument(strings, "violin"){

}
std::string Violin::sound(){
    return "Screech";
}