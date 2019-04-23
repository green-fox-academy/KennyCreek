//
// Created by vezer on 2019. 04. 23..
//

#ifndef INHERIT1_COHORT_H
#define INHERIT1_COHORT_H

#include <iostream>
#include <vector>
#include "Student.h"
#include "Mentor.h"


class Cohort {
public:
    void AddStudent();
    void AddMentor();



private:
    std::string name;
    std::vector<Student> *students;
    std::vector<Mentor> *mentors;

};


#endif //INHERIT1_COHORT_H
