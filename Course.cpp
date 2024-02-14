//
// Created by 20101 on 2/14/2024.
//

#include <set>
#include "Course.h"
namespace Mangement_System{

    Course::Course(std::string Course_Name, std::string Course_code){
        this->Course_Name=Course_Name;
        this->Course_code=Course_code;
    }
    bool Course::  operator <( Course Cs)
    {
        if(this->Course_code==Cs.Course_code)
            return this->Course_Name<Cs.Course_Name;
        return this->Course_code<Cs.Course_code;
    }
    bool Course:: operator ==( Course Cs)
    {
        return this->Course_Name==Cs.Course_Name&&this->Course_code==Cs.Course_code;
    }
    bool Course:: operator >(const Course Cs)
    {
        return !(*this<Cs||*this==Cs);
    }
    bool Course:: operator >=(const Course Cs)
    {
        return !(*this<Cs);
    }
    bool Course:: operator <=(const Course Cs)
    {
        return !(*this>Cs);

    }

}