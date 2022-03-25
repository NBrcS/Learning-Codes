#include <iostream>
#include <conio.h>

#define Size_Max 51

using namespace std;

int sum(int a, int b);
int product(int a, int b);
void multiplication_table(int a);

int main(void){
    int a = 2, b = 7;
    int c, d;

    c = sum(a, b);
    cout << "Sum value: " << c << endl;

    cout << endl;

    cout << "Type it any number for display your multiplication table: ";
    cin >> d;
    multiplication_table(d);

    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}

int sum(int a, int b){
    return a + b;
}

int product(int a, int b){
    return a * b;
}

void multiplication_table(int a){
    for(int i = 1; i <= 10; i++){
        cout << a << " * " << i << " = " << product(a, i) << endl;
    }
}

