#include <iostream>
#include <typeinfo>
#include <string>
#include <conio.h> 

#define Size_Max 51

using namespace std;

template <class Data>

void Show_Number(Data parameter){
    if(typeid(parameter).name() == typeid(int).name()){
        parameter++;
        cout << "Number: " << parameter << endl;
    }
    else{
        cout << "Mensage: " << parameter;
    }
}
void Pointer_Show_Number(int *Number);
void Reference_Show_Number(int &Number);


int main(void){
    int Number = 9;

    Show_Number(Number);
    cout << "Real Number: " << Number << endl;

    Show_Number("This number is 9? ");
    
    Pointer_Show_Number(&Number);
    cout << "Real Number: " << Number << endl;

    Reference_Show_Number(Number);
    cout << "Real Number: " << Number << endl;


    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}


void Pointer_Show_Number(int *Number){
    ++*Number;
    cout << "Pointer Number: " << *Number << endl;
}

void Reference_Show_Number(int &Number){
    Number++;
    cout << "Reference Number: " << Number << endl;
}

