#include <iostream>
#include <conio.h>
#include "Angle.h"

using namespace std;

int main(void){
    Angle A1, A2, A3 = 58;

    cout << "Enter with Degree of angle: ";
    cin >> A2;

    A1.Print_Info();
    A2.Print_Info();
    A3.Print_Info();

    Angle A4 = A2 + A3;
    A4.Print_Info();

    cout << "There angles are: ";
    cout << A1 << endl;
    cout << A2 << endl;
    cout << A3 << endl;
    cout << A4 << endl;

    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}
