#include <iostream>
#include <conio.h>

using namespace std;

int main (void){
    int Numb;

    cout << "Digite um numero: ";
    cin >> Numb;
    
    if(Numb > 10){
        cout << "O numero eh maior que 10" << endl;
    }
    else if(Numb < 10){
        cout << "O numero eh menor que 10" << endl;
    }
    else{
        cout << "O numero eh 10" << endl;
    }

    cout << "\nDigite enter para encerrar. " << endl;
    getch();

    return 0;
}