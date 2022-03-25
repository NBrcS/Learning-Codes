#include <iostream>
#include <conio.h>

using namespace std;

int main (void){
    int Numb = 0;

    while(Numb < 10){
        cout << "The number " << Numb << " is less than 10" << endl;
        cout << "Write a number: ";
        cin >> Numb;
    }
    cout << "The number " << Numb << "is greater than 10" << endl;
    

    cout << "\nPress Enter to end the program. " << endl;
    getch();

    return 0;
}