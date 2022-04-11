#include <iostream>

using namespace std;


class Endereco{

    public:
        Endereco(){};
        Endereco(string,string, string, string, string,string);

        
        string toString();
        

    private:

    string street;
    string number;
    string district;
    string city;
    string state;
    string cep;


};

class Pessoa : public Endereco{

    public:
        Pessoa(){};
        Pessoa(string);
        Pessoa(string,Endereco, string);

        void setName(string name);
        void setAddress(Endereco adress);
        void setTelePhoneNumber(string telePhoneNumber);

        string getName();
        Endereco getAddress();
        string getTelePhoneNumber();

        string toString();
        

    private:

    string name;
    Endereco address;
    string telePhoneNumber;

};

Endereco::Endereco(string street,string number, string district, string city, string state, string cep){

    this->street = street;
    this->number = number;
    this->district = district;
    this->city = city;
    this->state = state;
    this->cep = cep;
}

string Endereco::toString(){

    string out;
    out = this->street + ", " + this->number + ", " + this->district + ". "  +this->city + " - "  +this->state + ". CEP: " + this->cep;
    return  out;
}  

Pessoa::Pessoa(string name): Endereco(){
    this->name = name;
}
Pessoa::Pessoa(string name,Endereco adress, string telePhoneNumber) : Endereco(){

    this->name = name;
    this->address = address;
    this->telePhoneNumber = telePhoneNumber;
}

void Pessoa::setAddress(Endereco address){
    this->address = address;
}
void Pessoa::setName(string name){
     this->name = name;
}
void Pessoa::setTelePhoneNumber(string telePhoneNumber){
    this->telePhoneNumber = telePhoneNumber;
}
Endereco Pessoa::getAddress(){
    return this->address;
}
string Pessoa::getName(){
    return this->name;
}
string Pessoa::getTelePhoneNumber(){
    return this->telePhoneNumber;
}

string Pessoa::toString(){
    string out;

    out = this->name + ", " + this->telePhoneNumber + "\n" + this->address.toString() + "\n";

    return out;
}

int main(){
    int n;
    string name, telePhoneNumber;
    string street, number, district, city, state, cep;
    Endereco address;

    cin >> n;
    cin.ignore();
    Pessoa pessoas[n];

    for(int i = 0; i < n; i++){
        getline(cin, name);
        getline(cin, telePhoneNumber);

        getline(cin, street);
        getline(cin, number);
        getline(cin, district);
        getline(cin, city);
        getline(cin, state);
        getline(cin, cep);

        address = Endereco(street, number, district, city, state, cep);
        pessoas[i].setAddress(address);
        pessoas[i].setName(name);
        pessoas[i].setTelePhoneNumber(telePhoneNumber);
    }

    for(int i = 0; i < n; i++){
        cout << pessoas[i].toString() << endl;
    }

    return 0;
}