#include <iostream>

#define DEFAULT_RATE 0.006
#define DEFAULT_VAR 51

using namespace std;

class Account{
    protected:
        string clientName;
        int number;
        double balance;

    public: 
        Account(string = "Undefined", int = 0, double = 0.0);

        void setClientName(string name) { this->clientName = name; };
        void setNumber(int num) { this->number = num; };
        void setBalance(double bal) { this->balance = bal; };
        string getClientName() { return this->clientName; };
        int getNumber() { return this->number; };
        double getBalance() { return this->balance; };

        void withdraw(double);
        void deposit(double);
};  

class Savings : public Account{
    private:
        int variation;
        double yieldRate;

    public: 
        Savings(int = 0.0, double = 0.006, string = "Undefined", int = 0, double = 0.0);

        void setVariantion(int var) { this->variation = var; };
        void setYieldRate(double rate) { this->yieldRate = rate; };
        int getVariation() { return this->variation; }
        double getYieldRate() { return this->yieldRate; }

        double pay();
};

class CurrentAccount : public Account{
    protected:
        double salary;
        double limit;

    public:
        CurrentAccount(double = 0.0, string = "Undefined", int = 0, double = 0.0);

        void setSalary(double sal) { this->salary = sal; };
        void setLimit(double lim) { this->limit = lim; };
        double getSalary() { return this->salary; };
        double getLimit() { return this->limit; };

        double totalAvailable();
        void setLimit();
};

class SpecialAccount : public CurrentAccount{
    public:
        SpecialAccount(double = 0.0, string = "Undefined", int = 0, double = 0.0);

        void setLimit();
};


int main(){
    string name;
    int num;
    double sal, deposit, with;

    getline(cin, name);
    cin >> num
        >> sal
        >> deposit
        >> with;
    cin.ignore();

    if(1){ 
        CurrentAccount account(sal, name, num, 0.0);
        cout << account.getClientName() << ", cc: "
             << account.getNumber() <<  ", salário "
             << account.getSalary() << ", ";

        account.deposit(deposit);
        account.withdraw(with);
        
        cout << "saldo total disponível: R$ "
             << account.totalAvailable()
             << endl;
    }

    getline(cin, name);
    cin >> num
        >> sal
        >> deposit
        >> with;
    cin.ignore();

    if(1){ 
        SpecialAccount account(sal, name, num);
        cout << account.getClientName() << ", cc: "
             << account.getNumber() <<  ", salário "
             << account.getSalary() << ", ";

        account.deposit(deposit);
        account.withdraw(with);
        
        cout << "saldo total disponível: R$ "
             << account.totalAvailable()
             << endl;
    }

    getline(cin, name);
    cin >> num
        >> deposit
        >> with;
    cin.ignore();

    if(1){ 
        Savings account(DEFAULT_VAR, DEFAULT_RATE, name, num);
        cout << account.getClientName() << ", cc: "
             << account.getNumber() << ", ";

        account.deposit(deposit);
        account.withdraw(with);
        account.setBalance((account.getBalance() + account.pay()));
        
        cout << "saldo total disponível: R$ "
             << account.getBalance()
             << endl;
    }



    return 0;
}

//Account implements
Account::Account(string name, int num, double bal){
    this->clientName = name;
    this->number = num;
    this->balance = bal;
}
void Account::deposit(double depo){
    this->balance += depo;
}
void Account::withdraw(double with){
    if(with > this->balance){
        cout << endl << "saldo insuficiente" << endl;
    }
    else{
        this->balance -= with;
    }
}


//Saving implements
Savings::Savings(int var, double rate, string name, int num, double bal) : Account(name, num, bal){
    this->variation = var;
    this->yieldRate = rate;
}

double Savings::pay(){
    if(this->variation == 51){
        return (this->balance * this->yieldRate);
    }
    else{
        return (this->balance * (this->yieldRate + 0.005));
    }
}


//CurrentAccount implements
CurrentAccount::CurrentAccount(double sal, string name, int num, double bal) : Account(name, num, bal){
    this->salary = sal;
    this->setLimit();
}
void CurrentAccount::setLimit(){
    this->limit = this->salary * 2;
}
double CurrentAccount::totalAvailable(){
    return (this->balance + this->limit);
};


//SpecialAccount implements
SpecialAccount::SpecialAccount(double sal, string name, int num, double bal) : CurrentAccount(sal, name, num, bal){
    this->setLimit();
}
void SpecialAccount::setLimit(){
    this->limit = this->salary * 4;
}