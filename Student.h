//
//  Student.h
//  proj01
//
#ifndef proj01_student_h
#define proj01_student_h

#include<iostream>
#include<vector>
using namespace std;

class Student
{
public:
    
    /*
     *  condtructor for student
     */
    Student(int studentID = 0, string name = "", int year = 0, float grade = 0.0);
    
protected:
    
    int m_studentID;
    string m_name;
    int m_year;
    float m_grade; // GPA
};


class UndergradStudent: private Student
{
public:
    
    UndergradStudent(int studentID, string name, int year, float grade, string major, string minor);
    
    
private:
    string m_major;
    string m_minor;
    
    
};


class GraduateStudent: private Student
{
public:
    
    GraduateStudent(int studentID, string name, int year, float grade, string dep, string advisor);
    
private:
    string m_dep;
    string m_advisor;
};



#endif

