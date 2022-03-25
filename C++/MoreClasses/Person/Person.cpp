#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string rg, string cpf, int age){
    RG = rg;
    CPF = cpf;
    Age = age;
}
void Person::Print_Info(){
    cout << "RG: " << RG << endl;
    cout << "CPF: " << CPF << endl;
    cout << "Age: " << Age << endl;
}
void Person::Set_RG(){
    getline(cin, RG);
}
void Person::Set_CPF(){
    getline(cin, CPF);
}
void Person::Set_Age(){
    cin >> Age;
    cin.ignore();
}
