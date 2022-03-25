#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person{
    protected:
        string RG;
        string CPF;
        int Age;

    public:
        Person(string = "Not-declared", string = "Not-declared", int = 0);
        ~Person() {};

        void Set_RG();
        void Set_CPF();
        void Set_Age();

        virtual void Print_Info();
};

#endif