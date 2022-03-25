#include <iostream>
#include <string>
#include <conio.h> 

#define Size_Max 51

using namespace std;

class Person{
    protected:
        string Name;
        int Age;
    public:
        void Construct_Person(string t_Name, int t_Age);
        void Destruct_Person();
        void Show_Person();
};
class Client : public Person{
    private:
        double Salary;
    public:
        void Construct_Client(string t_name, int t_Age, double t_Salary);
        void Show_Client();
};

int main(void){
    Person Person1;
    Client Client1;

    Person1.Construct_Person("Dave Patterson", 25);
    Person1.Show_Person();
    Person1.Destruct_Person();

    Client1.Construct_Client("Robert Downey Jr.", 49, 27000);
    Client1.Show_Client();



    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}

void Person::Construct_Person(string t_Name, int t_Age){
    Name = t_Name;
    Age = t_Age;
}
void Person::Destruct_Person(){
    cout << "\nClass destroyed" << endl;
}

void Person::Show_Person(){
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
}

void Client::Construct_Client(string t_Name, int t_Age, double t_Salary){
    Name = t_Name;
    Age = t_Age;
    Salary = t_Salary;
}
void Client::Show_Client(){
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "Salary: " << Salary << endl;
}
