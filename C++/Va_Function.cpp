#include <iostream>
#include <conio.h>
#include <stdarg.h>

#define Size_Max 51

using namespace std;

int sum(int count, ...);

int main(void){

    cout << sum(2, 3, 5);

    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}

int sum(int count, ...){
    va_list List;
    int  total = 0;

    va_start(List, count);
    for(int i = 0; i < count; i++){
        total += va_arg(List, int);
    }
    va_end(List);

    return total;
}