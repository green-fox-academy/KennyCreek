//
// Created by vezer on 2019. 04. 18..
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H
#include <iostream>

class Sharpie{
public:
    Sharpie(std::string color, float width, float inkAmount = 100);

    void use();




private:
    std::string _color;
    float _width;
    float _inkAmount;


};

#endif //SHARPIE_SHARPIE_H
