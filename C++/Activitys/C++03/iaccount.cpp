#include <iostream>

using namespace std;

class iAccount{
    public:
        virtual void withdraw(double = 0) = 0;
        virtual void deposit(double = 0) = 0;
        virtual void totalAvailable() = 0;
};

class Account : public iAccount{
    protected:
        string clientName;
        string accountNumber;
        double mensalSalary;
        double balance;
        double limit;
    
    public:
        Account(string = "undefined", string = "undefined", double = 0.0);

        virtual void setclientName(string name) { this->clientName = name; } ;
        void setAccountNumber(string anum) { this->accountNumber = anum; };
        void setMensalSalary(double msal) { this->mensalSalary = msal; };
        void setBalance(double bal) { this->balance = bal; };
        void setLimit(double lim) { this->limit = lim; };
        string getclientName() { return this->clientName; } ;
        string getAccountNumber() { return this->accountNumber; } ;
        double getMensalSalary() { return this->mensalSalary; } ;
        double getBalance() { return this->balance; } ;
        double getLimit() { return this->limit; } ;

        void withdraw(double = 0);
        void deposit(double = 0);
        void totalAvailable();

        virtual void setLimit();
};

class SpecialAccount : public Account{
    public:
        SpecialAccount(string = "undefined", string = "undefined", double = 0.0);

        void setLimit();
};

int main(){
    string name, anum;
    double msal, deposit, withdraw;
    Account *account;

    getline(cin, name);
    getline(cin, anum);
    cin >> msal
        >> deposit
        >> withdraw;
    cin.ignore();

    
    account = new Account(name, anum, msal);
    account->deposit(deposit);
    account->withdraw(withdraw);
    cout << account->getclientName() << ", cc: "
            << account->getAccountNumber() << ", salário "
            << account->getMensalSalary() << ", saldo total disponível: R$ ";
               account->totalAvailable();
            cout << endl;


    getline(cin, name);
    getline(cin, anum);
    cin >> msal
        >> deposit
        >> withdraw;
    cin.ignore();

    
    account = new SpecialAccount(name, anum, msal);
    account->deposit(deposit);
    account->withdraw(withdraw);
    cout << account->getclientName() << ", cc: "
            << account->getAccountNumber() << ", salário "
            << account->getMensalSalary() << ", saldo total disponível: R$ ";
               account->totalAvailable();
    cout << endl;



    return 0;
};


//Account implements
Account::Account(string name, string anum, double msal){
    this->clientName = name;
    this->accountNumber = anum;
    this->mensalSalary = msal;
    this->balance = 0.0;
    if(this->limit == 0) this->setLimit();
}

void Account::setLimit(){
    this->limit = this->mensalSalary * 2;
}
void Account::withdraw(double with){
    this->balance -= with;
};
void Account::deposit(double dep){
    this->balance += dep;
};
void Account::totalAvailable(){
    cout << (this->balance + this->limit) ;
}


//SpecialAccount implements
SpecialAccount::SpecialAccount(string name, string anum, double msal) : Account::Account(name, anum, msal){
    this->setLimit();
}

void SpecialAccount::setLimit(){
    this->limit = this->mensalSalary * 3;
}