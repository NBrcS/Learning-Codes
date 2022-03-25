#include <iostream>
#include <conio.h>

using namespace std;

int main (void){
    int Numb;

    cout << "Write a number between 1 and 5: ";
    cin >> Numb;

    switch(Numb){
        case 1: cout << "One" << endl; break;
        case 2: cout << "Two" << endl; break;
        case 3: cout << "Three" << endl; break;
        case 4: cout << "For" << endl; break;
        case 5: cout << "Five" << endl; break;

        default: 
            cout << "I don't know." << endl;
        break;
    }

    cout << "\nPress Enter to end the program. " << endl;
    getch();

    return 0;
}