#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector<int> Ages;
    vector<int>::iterator it;

    Ages.push_back(20);
    Ages.push_back(17);
    Ages.push_back(45);  
    Ages.push_back(35);  

    cout << "Desorganized vector: ";
    for(int i = 0; i < Ages.size(); i++){
        cout << Ages[i] << " ";
    }
    cout << endl;

    sort(Ages.begin(), Ages.end());

    cout << "Organized vector: ";
    for(int i = 0; i < Ages.size(); i++){
        cout << Ages[i] << " ";
    }
    cout << endl;

    Ages.pop_back();

    cout << "With Iterator: ";
    for(it = Ages.begin(); it != Ages.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;

    cout << "\nPress Enter to end the program. " << endl;
    getch();

    return 0;
}