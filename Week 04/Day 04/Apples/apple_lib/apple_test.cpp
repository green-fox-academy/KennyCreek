//
// Created by vezer on 2019. 04. 25..
//
#include <iostream>
#include <string>
#include "apple_test.h"



std::string getApple(){
    return "apple";
}
int sum (std::vector<int> *Sum){
    int temp = 0;
    for (int i = 0; i < Sum->size() ; ++i) {
        temp += Sum->at(i);
    }return temp;
};

