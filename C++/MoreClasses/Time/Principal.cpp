#include <iostream>
#include <conio.h> 
#include "Time.h"

using namespace std;

int main(void){
    Time Default;

    Default.Time_c();
    Default.printTime();

    Default.Set_Time();
    Default.printTime();

    Default.Time_d();

    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}
