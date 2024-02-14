//
// Created by 20101 on 2/14/2024.
//

#ifndef MANGEMENT_SYSTEM_ASSIGNMENT_H
#define MANGEMENT_SYSTEM_ASSIGNMENT_H

#endif //MANGEMENT_SYSTEM_ASSIGNMENT_H

#include <string>
#include <set>
#include <vector>
#include "Questions.h"
namespace Mangement_System{
    struct Student;
    struct Assignment{
        std::string name;
        std::string id;
        int numberOfateend;
        std::set<Student>Students_Assignment;
        std::vector<Question>Questions;
    };
}