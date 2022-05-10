#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    double weight, height;

    cin >> weight;
    cin >> height;

    cout << "IMC: " << ( weight / (height * height) ) << endl;

    return 0;
}