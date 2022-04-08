#include <iostream>

using namespace std;

class Worker{
    protected:
        string name;
        double salary;

    public:
        Worker();

        void setName(string);
        void setSalary(double);
        string getName();
        double getSalary();

        virtual double weeklyPaymentCalculate() { return 0.0; };
        virtual double weeklyPaymentCalculate(int) { return 0.0; };
};

class WorkerWithSalary : public Worker{
    public:
        WorkerWithSalary(double = 0.0);

        double weeklyPaymentCalculate();
};


class WorkerPerHour : public Worker{
    private:
        double hourValue;

    public:
        WorkerPerHour(double = 0.0);

        double weeklyPaymentCalculate(int);
};


int main(){
    int N, type;
    Worker * worker;

    cin >> N; cin.ignore();
    while(N--){
        string name;
        cin >> type; cin.ignore();
       
        switch ( type ) {
            case 1:

                double salary;

                getline(cin, name);
                cin >> salary; cin.ignore();
                
                worker = new WorkerWithSalary(salary);
                worker->setName(name);

                cout << worker->getName() << " - ";
                cout << "Semanal: R$ " << worker->weeklyPaymentCalculate() << " - ";
                cout << "Mensal: R$ " << worker->getSalary() << endl;

                break;
            case 2:
                double perHour;
                int hours;

                getline(cin, name);
                cin >> perHour; cin.ignore();
                cin >> hours; cin.ignore();


                worker = new WorkerPerHour(perHour);
                worker->weeklyPaymentCalculate(hours);
                worker->setName(name);

                cout << worker->getName() << " - ";
                cout << "Semanal: R$ " << worker->weeklyPaymentCalculate(hours) << " - ";
                cout << "Mensal: R$ " << worker->getSalary() << endl;

                break;
            default:
                break;
       } 
    }

    return 0;
}


//Worker implements
Worker::Worker(){
    this->salary = 0.0;
}

void Worker::setName(string name){
    this->name = name;
}
void Worker::setSalary(double salary){
    this->salary = salary;
}
string Worker::getName(){
    return this->name;
}
double Worker::getSalary(){
    return this->salary;
}


//WorkerWithSalay implements
WorkerWithSalary::WorkerWithSalary(double salary){
    this->salary = salary;
}

double WorkerWithSalary::weeklyPaymentCalculate(){
    return this->salary / 4;
}


//WorkerPerHour implements
WorkerPerHour::WorkerPerHour(double perHour){
    this->hourValue = perHour;
}

double WorkerPerHour::weeklyPaymentCalculate(int weeklyHours){
    double weeklyPayment;

    if(weeklyHours > 40 ){
        double excedent = (this->hourValue * 1.5) * (weeklyHours - 40);
        weeklyPayment = this->hourValue * 40 + excedent;
    }
    else weeklyPayment = this->hourValue * weeklyHours;
    

    this->salary = weeklyPayment * 4;

    return weeklyPayment;
}