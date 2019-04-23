//
// Created by vezer on 2019. 04. 23..
//

#ifndef INHERIT1_STUDENT_H
#define INHERIT1_STUDENT_H

#include <iostream>
#include "Person.h"


class Student : public Person {
public:
    Student(std::string name, int age, Gender gender, std::string previousOrganization);
    void skipDays(int NumberOfDays);
    void introduce() override ;
    void getGoal() override ;


private:
    std::string _previousOrganization;
    int _skippedDays;

};


#endif //INHERIT1_STUDENT_H
