#include <iostream>

using namespace std;

class Employee{
    private:
        string name;
        string lastName;
        double salary;

    public:
        Employee(string = "Indefinido", string = "Indefinido", double = 0.0);

        void setName(string);
        void setLastName(string);
        void setSalary(double);
        string getName();
        string getLastName();
        double getSalary();

        double getAnualSalary();
        void upSalary(double);
};
Employee::Employee(string Name, string LastName, double Salary){
    this->name = Name;
    this->lastName = LastName;
    this->salary = Salary;
}

void Employee::setName(string Name){
    this->name = Name;
}
void Employee::setLastName(string LastName){
    this->lastName = LastName;
}
void Employee::setSalary(double Salary){
    this->salary = Salary;
}
string Employee::getName(){
    return this->name;
}
string Employee::getLastName(){
    return this->lastName;
}
double Employee::getSalary(){
    return this->salary;
}


double Employee::getAnualSalary(){
    return salary * 12;
}
void Employee::upSalary(double Percent){
    this->salary = this->salary + (this->salary * Percent);
}


int main(){
    int N;

    double D_info;
    string S_info;

    cin >> N;
    cin.ignore();

    Employee employees[N];
    for(int i = 0; i < N; i++){
        getline(cin, S_info);
        employees[i].setName(S_info);

        getline(cin, S_info);
        employees[i].setLastName(S_info);

        cin >> D_info;
        employees[i].setSalary(D_info);

        cin.ignore();
    }

    for(int i = 0; i < N; i++){
        cout << employees[i].getName() << " " << employees[i].getLastName() << " - " << employees[i].getSalary() << " - ";
        cout << employees[i].getAnualSalary() << endl;

        employees[i].upSalary(0.1);
        cout << employees[i].getAnualSalary() << endl;

    }

    return 0;
}