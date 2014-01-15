//
//  student.h
//  proj01
//
//  Created by Nick Durak on 1/15/14.
//  Copyright (c) 2014 Barend Ungrodt. All rights reserved.
//

#ifndef proj01_student_h
#define proj01_student_h

class Student
{
public:
    
    /*
     *  condtructor for student
     */
    Student(int studentID = 0, string name = "", int year = 0, float grade = 0.0)
    {
        m_studentID = studentID;
        m_name = name;
        m_year = year;
        m_grade = grade;
    }
    
    
protected:
    
    int m_studentID;
    string m_name;
    int m_year;
    float m_grade; // GPA
};

#endif
