#include <iostream>

#define Size_Max 51

using namespace std;

class Employee{
    protected:
        string name;
        string registration;
        double salary;

    public:

        void setName(string);
        void setRegistration(string);
        void setSalary(double);
        string getName();
        string getRegistration();
        double getSalary();

};

class Consultant : public Employee{
    public:
        double getSalary();
        double getSalary(double);
};

int main(){
    string s_info;
    double d_info;

    Employee employee;
    Consultant consultant;

    //Employee setters;
    getline(cin, s_info);
    employee.setRegistration(s_info);
    getline(cin, s_info);
    employee.setName(s_info);

    cin >> d_info;
    cin.ignore();
    employee.setSalary(d_info); 

    //Consultant setters
    getline(cin, s_info);
    consultant.setRegistration(s_info);
    getline(cin, s_info);
    consultant.setName(s_info);

    cin >> d_info;
    cin.ignore();
    consultant.setSalary(d_info);

    cout << employee.getRegistration() << " - " << employee.getName() << " - R$ " << employee.getSalary() << endl;
    cout << consultant.getRegistration() << " - " << consultant.getName() << " - R$ " << consultant.getSalary() << endl;

    return 0;
}

//Employee implements
void Employee::setName(string name){
    this->name = name;
}
void Employee::setRegistration(string registration){
    this->registration = registration;
}
void Employee::setSalary(double salary){
    this->salary = salary;
}
string Employee::getName(){
    return this->name;
}
string Employee::getRegistration(){
    return this->registration;
}
double Employee::getSalary(){
    return this->salary;
}


//Consultant implements
double Consultant::getSalary(){
    return this->salary * (1.1);
}
double Consultant::getSalary(double yield){
    return this->salary * (1 + yield);
}
