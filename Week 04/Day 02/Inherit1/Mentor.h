//
// Created by vezer on 2019. 04. 23..
//

#ifndef INHERIT1_MENTOR_H
#define INHERIT1_MENTOR_H
#include <iostream>
#include "Person.h"

enum Level{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};
class Mentor : public Person {
public:
    Mentor(std::string name, int age, Gender gender, Level level);

    std::string getLevelasString();
    void getGoal()override ;
    void introduce() override ;

    Level getLevel() const;


private:
    Level _level;

};


#endif //INHERIT1_MENTOR_H
