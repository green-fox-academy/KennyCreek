//
// Created by vezer on 2019. 04. 23..
//

#ifndef INHERIT1_PERSON_H
#define INHERIT1_PERSON_H
#include <iostream>

enum Gender{
    FEMALE,
    MALE
};

class Person{

public:
    Person(std::string name, int age, Gender gender);

    virtual void introduce();
    std::string getGenderAsString();
    virtual void getGoal();

    const std::string &getName() const;

    int getAge() const;

    Gender getGender() const;


private:

    std::string _name;
    int _age;
    Gender _gender;
};

#endif //INHERIT1_PERSON_H
