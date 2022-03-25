#include "Person.h"
#include "Student.h"

#include <iostream>
#include <string>

using namespace std;

Student::Student(string rg, string cpf, int age, string id, string course){
    RG = rg;
    CPF = cpf;
    Age = age;
    Id = id;
    Course = course;
}

void Student::Print_Info(){
    Person::Print_Info();
    cout << "Id: " << Id << endl;
    cout << "Course: " << Course << endl;
}
void Student::Set_Course(){
    getline(cin, Course);
}
void Student::Set_Id(){
    getline(cin, Id);
}