#include <iostream>
#include <string>
#include <conio.h> 

#define Size_Max 51

using namespace std;

class Person{
    private:
        string name;
        string id;
        int age;

    public:
    void Construct_Person(string t_Id, string t_name, int t_age);
    void Destruct_Person();

    void Show_Name();
    void Show_Id();
    void Show_Age();
};
void Person::Construct_Person(string t_Id, string t_name, int t_age){
    id = t_Id;
    name = t_name;
    age = t_age;
}
void Person::Destruct_Person(){
    cout << "\nClass Destroyed" << endl;
}

void Person::Show_Name(){
    cout << "Name: " << name << endl;
}
void Person::Show_Id(){
    cout << "ID: " << id << endl;
}
void Person::Show_Age(){
    cout << "Age: " << age << endl;
}

int main(void){
    Person Person1;

    Person1.Construct_Person("151214", "Gabriel Nobrega", 19);

    Person1.Show_Name();
    Person1.Show_Id();
    Person1.Show_Age();

    Person1.Destruct_Person();

    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}