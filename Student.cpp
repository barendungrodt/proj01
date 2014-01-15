//
//  Student.cpp
//  proj01
//
//  Created by Nick Durak on 1/15/14.
//  Copyright (c) 2014 Barend Ungrodt. All rights reserved.
//

#include "Student.h"

Student::Student(int studentID, string name, int year, float grade)
{
    m_studentID = studentID;
    m_name = name;
    m_year = year;
    m_grade = grade;
}


UndergradStudent::UndergradStudent(int studentID, string name, int year, float grade, string major, string minor)
    : Student(studentID, name, year, grade)
    {
        m_major = major;
        m_minor = minor;
    }
    
    
GraduateStudent::GraduateStudent(int studentID, string name, int year, float grade, string dep, string advisor)
    : Student(studentID, name, year, grade)
{
    string m_dep;
    string m_advisor;
}