#include <iostream>
#include <conio.h>
#include "Complex.h"

using namespace std;

int main(void){
    Complex n1;
    Complex n2 = {4, 9};

    n1.print_Complex();
    n2.print_Complex();

    Complex n3, n4;
    n3 = n1.add(n2);
    n4 = n2.sub(n1);

    n3.print_Complex();
    n4.print_Complex();

    Complex n5, n6;
    n5 = n4 + n3;
    n6 = n4 - n3;

    n5.print_Complex();
    n6.print_Complex();

    if(!(!n5 && !n6)){
        cout << "n5 and n6 are different of 0." << endl;
    }
    n6 = ++n5;
    n5.print_Complex();


    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}
