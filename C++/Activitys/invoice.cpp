#include <iostream>
#include <iomanip>

using namespace std;

class Invoice{
    private:
        int number;
        int howMany;
        double price;
        string desc;

    public:
        Invoice(int = 0, int = 0, double = 0.0, string = "unknown");

        void setNumber(int);
        void setHowMany(int);
        void setPrice(double);
        void setDesc(string);
        int getNumber();
        int getHowMany();
        double getPrice();
        string getDesc();

        double getInvoiceAmount();
        void print();
};

Invoice::Invoice(int num, int how, double pric, string description){
    this->number = num;
    this->howMany = how;
    this->price = pric;
    this->desc = description;
}

void Invoice::setNumber(int num){ this->number = num; }
void Invoice::setHowMany(int how){ this->howMany = how; }
void Invoice::setPrice(double pric){ this->price = pric; }
void Invoice::setDesc(string description){ this->desc = description; }
int Invoice::getNumber(){ return this->number; }
int Invoice::getHowMany(){ return this->howMany; }
double Invoice::getPrice(){ return this->price; }
string Invoice::getDesc(){ return this->desc; }

double Invoice::getInvoiceAmount(){ return this->price * this->howMany; }
void Invoice::print(){
    cout << this->number << " - ";
    cout << this->desc << " - ";
    cout << this->howMany << " - ";
    cout << this->price << " - ";

    cout << this->getInvoiceAmount() << endl;
}


int main(){
    int I_info;
    double D_info;
    string S_info;

    Invoice item[2];

    for(int i = 0; i < 2; i++){ 
        cin >> I_info;
        cin.ignore();
        item[i].setNumber(I_info);

        getline(cin, S_info);
        item[i].setDesc(S_info);

        cin >> I_info;
        if(I_info < 0) item[i].setHowMany(0);
        else item[i].setHowMany(I_info);

        cin >> D_info;
        if(D_info < 0.0) item[i].setPrice(0.0);
        else item[i].setPrice(D_info);
    }
    
    for(int i = 0; i < 2; i++){
        item[i].print();
    }


    return 0;
}

