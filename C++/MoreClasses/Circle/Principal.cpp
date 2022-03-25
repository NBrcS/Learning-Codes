#include <iostream>
#include <conio.h> 
#include "Circle.h"

using namespace std;

int main(void){
    float R;
    int X, Y;

    Circle c1;
    Circle c2 = {3.0, 1, 0};
    Circle c3 = {5.0};
    Circle c4;
    Circle c5;

    c1.Print_inf();
    cout << endl;

    c2.Print_inf();
    cout << endl;   

    c3.Print_inf();
    cout << endl;

    cout << "Type it the radius: ";
    cin >> R;
    c4.set_radius(R);

    cout << "Type it the X coordinate: ";
    cin >> X;
    cout << "Type it the Y coordinate: ";
    cin >> Y;
    c4.set_origin(X, Y);

    c4.Print_inf();
    cout << endl;

    c5 = {R, X, Y};
    c5.Print_inf();


    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}
