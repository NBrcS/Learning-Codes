#include <iostream>
#include "Time.h" 

using namespace std;

void Time::Time_c(){
    Hour = 0;
    Minute = 0;
    Second = 0;
}
void Time::Time_d(){
    Hour = 0;
    Minute = 0;
    Second = 0;
}
void Time::Set_Time(){
    int hh, mm, ss;

    cout << "Define the hour: ";
    cin >> hh;
    if(hh >= 0 && hh <= 23){
        Hour = hh;
    }

    cout << "Define the minute: ";
    cin >> mm;
    if(mm >= 0 && mm <= 59){
        Minute = mm;
    }

    cout << "Define the second: ";
    cin >> ss;
    if(ss >= 0 && ss <= 59){
        Second = ss;
    }
}
void Time::printTime(){
    cout << Hour << ":" << Minute << ":" << Second << endl;
}