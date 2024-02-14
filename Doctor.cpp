//
// Created by 20101 on 2/14/2024.
//
#include <iostream>
#include <string>
#include <set>
#include <vector>
#include "Doctor.h"
#include "Person.h"
#include "Course.h"
#include "Questions.h"
namespace Mangement_System{
    Course Doctor ::init()
    {
        std::string Name,Code;
        std::cout<<"Enter Course Name\n";
        std::cin>>Name;
        std::cout<<"Enter Course Code\n";
        std::cin>>Code;
        Course CS(Name,Code);
        return CS;
    }
    void Doctor::menu()
    {
        std::cout<< "1-List Courses\n"<<"2-Create course\n"<<"3-View Course\n"<<"4-Log out\n";
        int choice;
        std::cin>>choice;
        if(choice==1)
            return List_Courses();
        else if(choice==2)
            return Create_Course();
        else if(choice==3)
        {

        }

    }
    void Doctor::Create_Course()
    {
        Course CS = init();
        return Set_course(CS);
    }
    void Doctor::Set_course(Course CS)
    {
        Doctor::Courses.insert(CS);
    }
    void Doctor::List_Courses()
    {
        for(auto it:Doctor::Courses)
            std::cout<<it.Course_Name<<" "<<it.Course_code<<"\n";
    }
    void Doctor::View_Course()
    {

        Course CS=init();
        return;
    }
}