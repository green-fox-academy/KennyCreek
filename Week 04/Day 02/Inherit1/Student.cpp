//
// Created by vezer on 2019. 04. 23..
//

#include "Student.h"

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization) : Person(name, age, gender){
    _previousOrganization = previousOrganization;
    _skippedDays = 0;
}

void Student::getGoal(){
    std::cout<< "My goal is: Be a junior software developer."<<std::endl;

}


void Student::skipDays(int NumberOfDays){
    _skippedDays += NumberOfDays;
}

void Student::introduce(){
    std::cout<< "Hi I'm " << getName()<< ", a "<<getAge()<<" years old "<<getGenderAsString()<<" from "<<_previousOrganization<< " who skipped "<<_skippedDays<<std::endl;

}

