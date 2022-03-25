#include <iostream>
#include <stdlib.h>

#define TAM_MAX 101

using namespace std;

bool IsSparse(int Lines, int Columns, int Ar[][TAM_MAX]){
    int ZeroCount = 0;
    int ElementsCount = 0;

    for(int i = 0; i < Lines; i++){
        for(int j = 0; j < Columns; j++){
            if(Ar[i][j] == 0) ZeroCount++;
            ElementsCount++;
        }
    }

    if((1.0*ZeroCount / ElementsCount) > 0.7) return true;
    else return false;
}

int main (void){
    int lines, columns;
    int Array[TAM_MAX][TAM_MAX];

    cout << "Write the number of lines: ";
    cin >> lines;

    cout << "Write the number of columns: ";
    cin >> columns;

    

    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            cout << "Write the [ " << i << " ][ " << j << " ] element: ";
            cin >> Array[i][j];
        }
    }

    if(IsSparse(lines, columns, Array)) cout << "A matriz é esparsa" << endl;
    else cout << "A matriz não é esparsa" << endl;

    cout << "Press any button to end the program.";
    getchar();

    return 0;
}
