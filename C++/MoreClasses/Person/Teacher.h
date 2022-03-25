#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

#include <string>
using namespace std;

class Teacher : public Person{
    private:
        string Id;
        string Class;

    public:
        Teacher(string = "Not-Declared", string = "Not-Declared", int = 0, string = "Not-Declared", string = "Not-Declared");
        ~Teacher() {};

        void Print_Info();
        void Set_Classe();
        void Set_Id();

};

#endif