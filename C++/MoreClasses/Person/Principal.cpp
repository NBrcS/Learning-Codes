#include <iostream>
#include <conio.h>

#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main(void){
    Person p1 {"8999064", "10660805421", 19};
    Person p2, p3;
    Student s1 {"4587963", "15478946821", 23, "151423", "ECO"};
    Student s2, s3;
    Teacher t1 {"7412589", "78541236985", 32, "14159", "Operational Systems"};
    Teacher t2, t3;

    cout << "Type here the CPF of person: ";
    p2.Set_CPF();
    cout << "Type here the Rg of person: ";
    p2.Set_RG();
    cout << "Type here the Age of person: ";
    p2.Set_Age();

    p1.Print_Info();
    cout << endl;
    p2.Print_Info();
    cout << endl;
    p3.Print_Info();
    cout << endl;

    cout << "Type here the CPF of student: ";
    s2.Set_CPF();
    cout << "Type here the Rg of student: ";
    s2.Set_RG();
    cout << "Type here the Age of student: ";
    s2.Set_Age();
    cout << "Type here the Id of student: ";
    s2.Set_Id();
    cout << "Type here the course of student: ";
    s2.Set_Course();

    s1.Print_Info();
    cout << endl;
    s2.Print_Info();
    cout << endl;
    s3.Print_Info();
    cout << endl;

    cout << "Type here the CPF of teacher: ";
    t2.Set_CPF();
    cout << "Type here the Rg of teacher: ";
    t2.Set_RG();
    cout << "Type here the Age of teacher: ";
    t2.Set_Age();
    cout << "Type here the Id of teacher: ";
    t2.Set_Id();
    cout << "Type here the class of teacher: ";
    t2.Set_Classe();   

    t1.Print_Info();
    cout << endl;
    t2.Print_Info();
    cout << endl;
    t3.Print_Info();
    cout << endl;



    cout << "\nPress enter to end the program\n";
    getch();

    return 0;
}