#include <iostream>

#define Max_Size 51

using namespace std;

class Address{
   private:
        string street;
        string number;
        string district;
        string city;
        string state;
        string cep;

    public:
        Address(){};
        Address(string, string, string, string, string, string);
        
        string toString();
};

class Person{
    private:
        Address address;
        string name;
        string phoneNumber;

    public:
        Person(){};
        Person(string);
        Person(string, Address, string);

        void setAddress(Address);
        void setName(string);
        void setPhoneNumber(string);
        Address getAddress();
        string getName();
        string getPhoneNumber();

        string toString();
};

int main(){
    int N;
    string name, phoneNumber;
    string street, number, district, city, state, cep;
    Address generic;

    cin >> N;
    cin.ignore();
    Person people[N];

    for(int i = 0; i < N; i++){
        getline(cin, name);
        getline(cin, phoneNumber);

        getline(cin, street);
        getline(cin, number);
        getline(cin, district);
        getline(cin, city);
        getline(cin, state);
        getline(cin, cep);

        generic = Address(street, number, district, city, state, cep);
        people[i].setAddress(generic);
        people[i].setName(name);
        people[i].setPhoneNumber(phoneNumber);
    }

    for(int i = 0; i < N; i++){
        cout << people[i].toString() << endl;
    }

    return 0;
}


//Adress implements
Address::Address(string street, string number, string district, string city, string state, string cep){
    this->street = street;
    this->number = number;
    this->district = district;
    this->city = city;
    this->state = state;
    this->cep = cep;
}

string Address::toString(){
    string out;

    out = this->street + ", " + this->number + ", " + this->district + ". "  +this->city + " - "  +this->state + ". CEP: " + this->cep;

    return out;
}

//Person implements
Person::Person(string name){
    this->name = name;
}
Person::Person(string name, Address address, string phoneNumber){
    this->name = name;
    this->address = address;
    this->phoneNumber = phoneNumber;
}

void Person::setAddress(Address address){
    this->address = address;
}
void Person::setName(string name){
     this->name = name;
}
void Person::setPhoneNumber(string phoneNumber){
    this->phoneNumber = phoneNumber;
}
Address Person::getAddress(){
    return this->address;
}
string Person::getName(){
    return this->name;
}
string Person::getPhoneNumber(){
    return this->phoneNumber;
}

string Person::toString(){
    string out;

    out = this->name + ", " + this->phoneNumber + "\n" + this->address.toString() + "\n";

    return out;
}