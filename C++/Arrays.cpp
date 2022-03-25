#include <iostream>
#include <conio.h>

#define Size_Max 10

using namespace std;

int main (void){
    int Array[Size_Max] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << Array[0] << endl;

    cout << "\nPress Enter to end the program. " << endl;
    getch();

    return 0;
}