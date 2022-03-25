#include <iostream>
#include <string>
#include <conio.h> 

#define Size_Max 51

using namespace std;

int main(void){
    int Array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Walking normally (with FOR): " << endl;
    for(int i = 0; i < 10; i++){
        cout << Array[i] << " ";
    }
    cout << endl;

    cout << "Walking with RANGE-FOR: " << endl;
    for(int x : Array){
        cout << Array[x] << " ";
    }
    cout << endl;

    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}
