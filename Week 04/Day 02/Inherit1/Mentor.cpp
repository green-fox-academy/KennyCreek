//
// Created by vezer on 2019. 04. 23..
//

#include "Mentor.h"
#include "Person.h"

Mentor::Mentor(std::string name, int age, Gender gender, Level level) : Person(name, age, gender) {
    _level = level;

}

Level Mentor::getLevel() const {
    return _level;
}

std::string Mentor::getLevelasString() {
    switch (_level) {
        case JUNIOR:
            return "junior";
        case INTERMEDIATE:
            return "intermediate";
        case SENIOR:
            return "senior";
    }
};

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() {
    std::cout << "Hi I'm " << getName() << " a " << getAge() << " year old " << getGenderAsString() << " "
              << getLevelasString() << " mentor" << std::endl;
}