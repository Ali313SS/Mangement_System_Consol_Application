
#ifndef MANGEMENT_SYSTEM_COURSE_H
#define MANGEMENT_SYSTEM_COURSE_H

#endif //MANGEMENT_SYSTEM_COURSE_H

#include <string>
#include <set>
#include "Assignment.h"
namespace Mangement_System {
    struct Course {
        static int add;
        int registered_students;
        std::string Course_Name;
        std::string Course_code;
        std::set<Assignment> Assignments;
        std::set <Student> Students;
        Course(std::string Course_Name, std::string Course_code);
        bool operator <( Course  Cs);
        bool operator >( Course  Cs);
        bool operator ==( Course  Cs);
        bool operator <=( Course  Cs);
        bool operator >=( Course  Cs);

    };

}