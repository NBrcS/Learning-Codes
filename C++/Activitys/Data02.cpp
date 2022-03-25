#include <iostream>

using namespace std;

class Data {
    private: 
        int day;
        int month;
        int year;

    public:
        Data();

        void set_day(int);
        void set_month(int);
        void set_year(int);
        int get_day();
        int get_month();
        int get_year();

        void printData();
};

Data::Data() {
    day = 1;
    month = 1;
    year = 1;
}

void Data::set_day(int d) { this->day = d; }
void Data::set_month(int m) { this->month = m; }
void Data::set_year(int y) { this->year = y; }
int Data::get_day() { return this->day; }
int Data::get_month() { return this->month; }
int Data::get_year() { return this->year; }

void Data::printData(){
    string monthsName[13] = {"Janeiro", "Fevereiro", "Março",
                             "Abril", "Maio", "Junho", 
                             "Julho", "Agosto", "Setembro", 
                             "Outubro", "Novembro", "Dezembro", 
                             "Indefinido"};

    if( this->month > 12 || this->month < 1 ) cout << this->day << " de " << monthsName[12] << " de " << this->year;
    else cout << this->day << " de " << monthsName[(this->month) - 1] << " de " << this->year;
}

int main(){
    int inf;
    Data data;

    cin >> inf;
    data.set_day(inf);

    cin >> inf;
    data.set_month(inf);

    cin >> inf;
    data.set_year(inf);

    data.printData();


    return 1;
}
