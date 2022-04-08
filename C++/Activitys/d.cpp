#include <iostream>

using namespace std;

class Employee
{

private:
    string name;
    string surname;
    float salary;
    
public:
    Employee();
    Employee(string name, string surname, double salary);

    string getName();
    string getSurname();
    double getSalary();

    void setName(string);
    void setSurname(string);
    void setSalary(double);

    double getAnnualSalary();

    void IncreaseSalary(double);
};

//constructor
Employee::Employee(){
    
}

Employee::Employee(string name, string surname, double salary): name(""), surname(""), salary(0)
{
    
}

//getters
string Employee::getName(){
    return name;
}
string Employee::getSurname(){
    return surname;
}
double Employee::getSalary(){
    return salary;
}

//setters
void Employee::setName(string name){
    this->name = name;
}
void Employee::setSurname(string surname){
    this->surname = surname;
}
void Employee::setSalary(double salary){
    this->salary = salary;
}

//other methods
double Employee::getAnnualSalary(){
    return 12*salary;
}
void Employee::IncreaseSalary(double percent){
    salary = (1+percent)*salary;
}

int main(){
    int n;

    string str;
    int sal;

    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++){
        cin >> str;
        emp[i].setName(str);
        cin >> str;
        emp[i].setSurname(str);
        cin >> sal;
        emp[i].setSalary(sal);
    }

    for (int i = 0; i < n; i++){
        cout << emp[i].getName() << " " << emp[i].getSurname() << " - " << emp[i].getSalary() << " - " << emp[i].getAnnualSalary() << endl;
        cout << emp[i].IncreaseSalary(0.1) << emp[i].getSalary() << endl;
    }
    return 0;
}