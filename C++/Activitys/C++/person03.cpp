#include <iostream>

using namespace std;

class Person{
    private: 
        string name;
        string phoneNumber;
        int age;
    
    public:
        //Person(string = "Indefinido");
        Person(string = "Indefinido", string = "Indefinido", int = 0);

        void setName(string);
        void setPhoneNumber(string);
        void setAge(int);
        string getName();
        string getPhoneNumber();
        int getAge();
};

//Person::Person(string Name){ this->name = Name; }
Person::Person(string Name, string PhoneNumber, int Age){
    this->name = Name;
    this->phoneNumber = PhoneNumber;
    this->age = Age; 
}

void Person::setName(string Name){ this->name = Name; }
void Person::setPhoneNumber(string PhoneNumber){ this->phoneNumber = PhoneNumber; }
void Person::setAge(int Age){ this->age = Age; }

string Person::getName(){ return this->name; }
string Person::getPhoneNumber(){ return this->phoneNumber; } 
int Person::getAge(){ return this->age; }


int main(){
    bool found == false;
    int I_info, N;
    string S_info1, S_info2, search;

    cin >> N;
    cin.ignore();

    Person people[N];

    for(int i = 0; i < N; i++){
        getline(cin, S_info1);

        cin >> I_info;
        cin.ignore();

        getline(cin, S_info2);

        people[i] = {S_info1, S_info2, I_info};
    }
    getline(cin, search);

    for(int i = 0; i < N; i++){ 
        if((people[i].getName().find(search) != -1)){
            cout << people[i].getName() << ", " << people[i].getAge() << ", " << people[i].getPhoneNumber() << endl;
            found = true;
        }
    }
    if(found == false) cout << "Pessoa não encontrada" << endl;

    return 0;
}