#include <iostream>
#include <conio.h>

#define Size_Max 51

using namespace std;

template <class Data>

Data Function(Data a){
    return a + 1;
}

int main (void){
    
    cout << Function(10) << endl;
    cout << Function(10.1) << endl;
    cout << Function('a') << endl;

    cout << "\nPress Enter to end the program. " << endl;
    getch();

    return 0;
}

