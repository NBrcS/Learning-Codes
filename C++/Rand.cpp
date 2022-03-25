#include <iostream>
#include <string>
#include <conio.h> 

#define Size_Max 51

using namespace std;

int main(void){
    int Array[Size_Max];

    for(int i = 0; i < Size_Max; i++){
        Array[i] = rand()%11;
        cout << "Array[" << i << "] = " << Array[i] << " ";
    }

    cout << "\nPress Enter to end the program. ";
    getch();

    return 0;
}
