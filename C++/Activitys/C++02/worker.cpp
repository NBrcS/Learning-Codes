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
};

class WorkerWithSalary : public Worker{
    public:
        WorkerWithSalary();

        double weeklyPaymentCalculate();
};


class WorkerPerHour : public Worker{
    private:
        double hourValue;

    public:
        WorkerPerHour();

        double weeklyPaymentCalculate();
        
};
