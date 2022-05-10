#include <iostream>

using namespace std;

class Data{
    public:
        int day;
        int month;
        int year;

        Data();
};

Data::Data(){
    this->day = 1;
    this->month = 1;
    this->year = 1;
}

int main(){
    Data data;

    cin >> data.day;
    cin >> data.month;
    cin >> data.year;

    cout << data.day << "/" << data.month << "/" << data.year << endl;

}