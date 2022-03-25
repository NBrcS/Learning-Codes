#include <iostream>
#include <conio.h>

#define Size_Max 51

using namespace std;

struct Client{
    int Id;
    int Age;
    float Salary;
    char Name[Size_Max];
};

int main (void){

    Client My_client = {121548, 19, 3500, "Gabriel"};
    Client My_client2;

    cout << "Id of client: " << My_client.Id << endl;
    cout << "Age of client: " << My_client.Age << endl;
    cout << "Salary of client: " << My_client.Salary << endl;
    cout << "Name of client: " << My_client.Name << endl;

    cout << "\nType it the Id of client: ";
    cin >> My_client2.Id;
    cout << "Type it the Age of client: ";
    cin >> My_client2.Age;
    cout << "Type it the Salary of client: ";
    cin >> My_client2.Salary;
    cout << "Type it the Name of client: ";
    cin >> My_client2.Name;

    cout << "\nId of client 2: " << My_client2.Id << endl;
    cout << "Age of client 2: " << My_client2.Age << endl;
    cout << "Salary of client 2: " << My_client2.Salary << endl;
    cout << "Name of client 2: " << My_client2.Name << endl;
    

    cout << "\nPress Enter to end the program. " << endl;
    getch();

    return 0;
}