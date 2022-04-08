#include <iostream>

#define Max_Size 51

using namespace std;

class Payment{
    private: 
        string employeeName;
        double paymentValue;

    public:
        Payment();

        void setEmployeeName(string);
        void setPaymentValue(double);
        string getEmployeeName();
        double getPaymentValue();
};

class PaymentControl{
    private: 
        Payment payments[Max_Size];

    public:
        PaymentControl(){};

        void setPayment(Payment, int);
        Payment getPayment(int);

        double totalPayment();
        int getEmployeeIndex(string);
};

int main(){
    double pay;
    int N, index;
    string name;

    PaymentControl control;
    Payment generic;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> pay;
        cin.ignore();
        generic.setPaymentValue(pay);

        getline(cin, name);
        generic.setEmployeeName(name);

        control.setPayment(generic, i);
    }
    getline(cin, name);

    if(control.getEmployeeIndex(name) != -1){
        index = control.getEmployeeIndex(name);
        generic = control.getPayment(index);

        cout << generic.getEmployeeName() << ": R$ " << generic.getPaymentValue() << endl;;
    }
    else cout << name << " não encontrado(a)." << endl;

    cout << "Total: R$ " << control.totalPayment() << endl;

    return 0;
}


//Payment implements
Payment::Payment(){
    this->paymentValue = 0.0;
}

void Payment::setEmployeeName(string name){
    this->employeeName = name;
}
void Payment::setPaymentValue(double value){
    this->paymentValue = value;
}
string Payment::getEmployeeName(){
    return this->employeeName;
}
double Payment::getPaymentValue(){
    return this->paymentValue;
}


//PaymentControl implements
void PaymentControl::setPayment(Payment p, int index){
    payments[index] = p;
}
Payment PaymentControl::getPayment(int index){
    return payments[index];
}

double PaymentControl::totalPayment(){
    double sum = 0.0;

    for(int i = 0; i < Max_Size; i++){
        sum += payments[i].getPaymentValue();
    }

    return sum;
}
int PaymentControl::getEmployeeIndex(string name){
    int index;
    bool finded = false;

    for(int i = 0; i < Max_Size; i++){
        if(payments[i].getEmployeeName().find(name) != -1){
            index = i;
            finded = true;
        }
    }

    if(!finded) return -1;
    else return index;
}

