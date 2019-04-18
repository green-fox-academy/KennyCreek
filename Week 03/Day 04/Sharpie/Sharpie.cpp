//
// Created by vezer on 2019. 04. 18..
//

#include "Sharpie.h"

Sharpie::Sharpie(std::string color, float width, float inkAmount) {
    Sharpie::_color = color;
    Sharpie::_width = width;
    Sharpie::_inkAmount = inkAmount;
}

void Sharpie::use() {
    _inkAmount = _inkAmount - _width;
}

