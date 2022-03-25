#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    double num;
    double sum = 0;

    for(int i = 0; i < 3; i++){
        cin >> num;
        sum += num;
    }

    cout << (sum / 3) << endl;

    return 0;
}