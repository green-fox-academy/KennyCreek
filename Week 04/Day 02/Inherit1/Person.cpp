//
// Created by vezer on 2019. 04. 23..
//
#include "Person.h"

Person::Person(std::string name, int age, Gender gender){
    _name = name;
    _age = age;
    _gender = gender;
}

const std::string &Person::getName() const {
    return _name;
}

int Person::getAge() const {
    return _age;
}

Gender Person::getGender() const {
    return _gender;
}

void Person::introduce() {
    std::cout<< "Hi I'm " << _name << ", a " << _age << " years old " << getGenderAsString() << std::endl;
}

std::string Person::getGenderAsString() {
    switch (_gender){
        case FEMALE:
            return "Female";
        case MALE:
            return "Male";
    }
}

void Person::getGoal() {
    std::cout<< "My goal is: Live for the moment!" << std::endl;
}