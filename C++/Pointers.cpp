#include <iostream>
#include <conio.h>

#define Size_Max 51

using namespace std;


int main (void){
    
    int Number = 5;
    int *Pointer;

    Pointer = &Number;

    cout << "Value of variable: " << Number << endl;
    cout << "Adress of variable: " << &Number << endl;
    cout << "Address where Pointer points: " << Pointer << endl;
    cout << "Adress of pointer: " << &Pointer << endl;
    cout << "Value for which the pointer points: " << *Pointer << endl;

    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}

