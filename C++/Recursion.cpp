#include <iostream>
#include <conio.h> 

#define Size_Max 51

using namespace std;

unsigned long long int factorial(unsigned long long int n);

int main(void){
    unsigned long long int a;

    cin >> a;
    cout << factorial(a);

    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}

unsigned long long int factorial(unsigned long long int n){
    if(n < 2) return 1;

    return factorial(n - 1) * n;
}
