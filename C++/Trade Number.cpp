#include <iostream>
#include <conio.h>

using namespace std;

int main (void){
    int a, b;
    int aux; 

    cout << "Digite o valor A: ";
    cin >> a;

    cout << "Digite o valor B: ";
    cin >> b;

    cout << "O valor de A eh " << a << endl;
    cout << "O valor de B eh " << b << endl << endl;

    aux = a;
    a = b;
    b = aux;

    cout << "O valor de A agora eh " << a << endl;
    cout << "O valor de B agora eh " << b << endl << endl;

    cout << "Digite enter para encerrar. " << endl;
    getch();

    return 0;
}