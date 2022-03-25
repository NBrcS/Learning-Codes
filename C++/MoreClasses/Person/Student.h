#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

#include <string>
using namespace std;

class Student : public Person{
    private:
        string Id;
        string Course;

    public:
        Student(string = "Not-Declared", string = "Not-Declared", int = 0, string = "Not-Declared", string = "Not-Declared");
        ~Student() {};

        void Print_Info();
        void Set_Course();
        void Set_Id();

};

#endif