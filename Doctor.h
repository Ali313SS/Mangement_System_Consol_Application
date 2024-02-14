
#ifndef MANGEMENT_SYSTEM_DOCTOR_H
#define MANGEMENT_SYSTEM_DOCTOR_H

#endif //MANGEMENT_SYSTEM_DOCTOR_H
//
// Created by 20101 on 2/14/2024.
//


#include <string>
#include <set>
#include <vector>
#include "Person.h"
#include "Course.h"
#include "Assignment.h"
#include "Questions.h"
namespace Mangement_System{
    class Doctor:Person{
    private:
        std::set<Course>Courses;
        void menu();
        Course init();
        void Create_Course();
        void Set_course(Course Cs);
        void create_Assigment(Course Cs,std::vector<Question>Q);
        void set_grade(Course Cs,Assignment AS,std::vector<char>Answer);
        void set_grade(Course Cs,Assignment AS,std::string id,int grade);
        void List_Courses();
        void View_Course();
        void List_Assignments(Course Cs);
        void List_Solution(Course Cs,int index);
        void View_Solution(std::vector<Question>Q);
    };

}