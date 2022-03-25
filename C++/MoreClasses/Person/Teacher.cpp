#include "Person.h"
#include "Teacher.h"

#include <iostream>
#include <string>

using namespace std;

Teacher::Teacher(string rg, string cpf, int age, string id, string classe){
    RG = rg;
    CPF = cpf;
    Age = age;
    Id = id;
    Class = classe;
}

void Teacher::Print_Info(){
    Person::Print_Info();
    cout << "Id: " << Id << endl;
    cout << "Class: " << Class << endl;
}
void Teacher::Set_Classe(){
    getline(cin, Class);
}
void Teacher::Set_Id(){
getline(cin, Id);}