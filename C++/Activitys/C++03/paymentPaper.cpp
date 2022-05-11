#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee{
    protected:
        string name;
        int id;

    public:
        Employee(string = "Undefined", int = 00000);

        void setName(string name) { this->name = name; };
        void setId(int id) { this->id = id; };
        string getName() { return this->name; };
        int getId() { return this->id; };

        virtual double calculateSalary() = 0;
};

class SalariedEmployee : public Employee{
    private:
        double salary;

    public:
        SalariedEmployee(double = 0.0, string = "Undefined", int = 00000);

        void setSalary(double sal) { this->salary = sal; };
        double getSalary() { return this->salary; };

        double calculateSalary(){ return this->salary; };

};

class HourlyEmployee : public Employee{
    private:
        double perHour;
        double workedHours;

    public:
         HourlyEmployee(double = 0.0, double = 0.0, string = "Undefined", int = 00000);

        void setPerHour(double hour) { this->perHour = hour; };
        void setWorkedHours(double worked) { this->workedHours = worked; };
        double getPerHour() { return this->perHour; };
        double getWorkedHours() { return this->workedHours; };

        double calculateSalary();
};

class ComissionEmployee : public Employee{
    private:
        double weeklySales;
        double CommissionPercent;

    public:
        ComissionEmployee(double = 0.0, double = 0.0, string = "Undefined", int = 00000);

        void setWeeklySales(double sale) { this->weeklySales = sale; };
        void setComissionPercent(double percent) { this->CommissionPercent = percent; };
        double getWeeklySales() { return this->weeklySales; };
        double getComissionPercent() {return this->CommissionPercent; };

        double calculateSalary();
};

class ManagementSheet{
    private:
        vector<Employee*> employees;
        double maxBudget;

    public:
        ManagementSheet(double);

        void addEmployee(Employee*);
        double totalSheetCalculate();
        double employeeSalaryConsult(string);
};

int main(){
    double budget;
    double sal;
    double perHours, workedHours;
    double weeklySales, percentComission;
    string name, search;
    int I_info;

    cin >> budget; cin.ignore();
    ManagementSheet sheet(budget);
    Employee* generic;

    getline(cin, name);
    cin >> I_info
        >> sal; 
    cin.ignore();

    generic = new SalariedEmployee(sal, name, I_info);
    sheet.addEmployee(generic);


    getline(cin, name);
    cin >> I_info
        >> perHours
        >> workedHours;
    cin.ignore();

    generic = new HourlyEmployee(perHours, workedHours, name, I_info);
    sheet.addEmployee(generic);


    getline(cin, name);
    cin >> I_info
        >> weeklySales
        >> percentComission;
    cin.ignore();

    generic = new ComissionEmployee(weeklySales, percentComission, name, I_info);
    sheet.addEmployee(generic);

    for(int i = 0; i < 3; i++){
        getline(cin, search);
        try{
            sal = sheet.employeeSalaryConsult(search);

            cout << sal << endl;

        }catch(string error){
            cout << error  << endl;
        }
    }

    try{
        cout << sheet.totalSheetCalculate() << endl;
    }catch(string error){
        cout << error  << endl;
    }
    

    return 0;
}

//Employee implements
Employee::Employee(string name, int id){
    this->name = name;
    this->id = id;
}

//SalariedEmployee implements
SalariedEmployee::SalariedEmployee(double salary, string name, int id) : Employee(name, id){
    this->salary = salary;
}


//HourlyEmployee implements
HourlyEmployee::HourlyEmployee(double perHour, double workedHours, string name, int id) : Employee(name, id){
    this->perHour = perHour;
    this->workedHours = workedHours;
}

double HourlyEmployee::calculateSalary(){
    if(this->workedHours <= 40) return (this->workedHours * this->perHour) * 4;
    else{
        double sum;

        sum = ((40 * this->perHour) + ((this->workedHours - 40) * (this->perHour * 1.5))) * 4;

        return sum;
    } 
}


//ComissionEmployee implements
ComissionEmployee::ComissionEmployee(double weeklySales, double CommissionPercent, string name, int id) : Employee(name, id){
    this->weeklySales = weeklySales;
    this->CommissionPercent = CommissionPercent;
}
double ComissionEmployee::calculateSalary(){
    return this->CommissionPercent * this->weeklySales;
}

//ManagementSheet implements
ManagementSheet::ManagementSheet(double max){
    this->maxBudget = max;
}

void ManagementSheet::addEmployee(Employee* emp){
    this->employees.push_back(emp);
}
double ManagementSheet::totalSheetCalculate(){
    double sum = 0;

    for(auto emp : employees){
        sum += emp->calculateSalary();
    }
    if(sum >= this->maxBudget) throw ("OrcamentoEstouradoException " + (to_string((int)sum)));

    return sum;
}
double ManagementSheet::employeeSalaryConsult(string name){
    double sal;
    bool found = false;

    for(auto emp : employees){
        if(emp->getName().find(name) != -1){
            found = true;
            sal = emp->calculateSalary();
            break;
        }
    }
    if(found == false) throw ("FuncionarioNaoExisteException " + name);
     

    return sal;
}