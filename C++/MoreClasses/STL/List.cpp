#include <iostream>
#include <conio.h>
#include <list>

using namespace std;

int main(void){
    list<int> List;
    list<int>::iterator it;

    List.push_back(25);
    List.push_back(69);
    List.push_back(12);

    cout << "Random list: ";
    for(it = List.begin(); it != List.end(); it++){
        cout << (*it) << " "; 
    }
    cout << endl;

    List.push_back(76);
    cout << "Random list with push_back: ";
    for(it = List.begin(); it != List.end(); it++){
        cout << (*it) << " "; 
    }
    cout << endl;

    List.push_front(57);
    cout << "Random list with push_front: ";
    for(it = List.begin(); it != List.end(); it++){
        cout << (*it) << " "; 
    }
    cout << endl;

    List.pop_back();
    cout << "Organized list with pop_back: ";  
    for(it = List.begin(); it != List.end(); it++){
        cout << (*it) << " "; 
    } 
    cout << endl;

    List.pop_front();
    cout << "Organized list with pop_front: ";  
    for(it = List.begin(); it != List.end(); it++){
        cout << (*it) << " "; 
    } 
    cout << endl;


    cout << "Press enter to end the program." << endl;
    getch();

    return 0;
}