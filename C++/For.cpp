#include <iostream>
#include <conio.h>

using namespace std;

int main (void){

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cout << "(" << i << ", " << j << ") ";
            if(j == 5){
                cout << endl;
            }
        }
    }

    cout << "\nPress Enter to end the program. " << endl;
    getch();

    return 0;
}