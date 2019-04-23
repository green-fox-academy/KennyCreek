//
// Created by vezer on 2019. 04. 23..
//

#ifndef INHERIT1_SPONSOR_H
#define INHERIT1_SPONSOR_H

#include <iostream>
#include "Person.h"

class Sponsor : public Person {
public:
    Sponsor(std::string name, int age, Gender gender, std::string company, int hiredStudents);

    void getGoal()override ;
    void introduce() override ;
    void hire();
private:
    std::string _company;
    int _hiredStudents;


};


#endif //INHERIT1_SPONSOR_H
