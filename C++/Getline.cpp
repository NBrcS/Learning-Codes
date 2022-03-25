#include <iostream>

#define Char_Size_Max 51

using namespace std;

int main (void){
    string name, id, email;
    int Age;

    cout << "Type it your email: ";
    cin >> email;
    cin.ignore();

    cout << "Type it your name: ";
    getline(cin, name);

    cout << "Type it your age: ";
    cin >> Age;
    cin.ignore();

    cout << "Type it your id: ";
    getline(cin, id);

    cout << endl;

    cout << "Name: " << name << endl;
    cout << "Age: " << Age << endl;
    cout << "id: " << id << endl;
    cout << "Email: " << email << endl;
     
    return 0;
}