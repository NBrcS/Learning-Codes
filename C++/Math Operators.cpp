#include <iostream>
#include <conio.h>

using namespace std;

int main (void){
    int a, b;

    a = 10;
    b = 2;

    cout << "A soma eh: " << a + b << endl;
    cout << "A subtracao eh: " << a - b << endl;
    cout << "A divisao eh: " << a / b << endl;
    cout << "O resto eh: " << a % b << endl;
    cout << "O produto eh: " << a * b << endl;

    cout << "\nDigite enter para encerrar. " << endl;
    getch();

    return 0;
}