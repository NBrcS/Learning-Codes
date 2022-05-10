#include <iostream>

using namespace std;

class Data {
    private: 
        int day;
        int month;
        int year;

    public:
        Data(int, int, int);

        void set_day(int);
        void set_month(int);
        void set_year(int);
        int get_day();
        int get_month();
        int get_year();

        void nextDay();
};

Data::Data(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Data::set_day(int d) { this->day = d;}
void Data::set_month(int m){ this->month = m; }
void Data::set_year(int y) { this->year = y; }

int Data::get_day() { return this->day; }
int Data::get_month() { return this->month; }
int Data::get_year( ){ return this->year; }

void Data::nextDay() {
    this->day++;

    if ((this->month == 2 && this->day > 28) || 
       ((this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11) && this->day > 30) ||
       ((this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12) && this->day > 31)){
        
        this->day = 1;
        this->month++;

        if (this->month > 12){
            this->month = 1;
            this->year++;
        }
    }
}

int main(){
    int day, month, year, daysMore;

    cin >> day;
    cin >> month;
    cin >> year;

    cin >> daysMore;

    if (month > 12 || month < 1){
        cout << "Atributo mês Inválido" << endl;
        month = 1;
    }

    if ((month == 2 && day > 28) || 
       ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) ||
       ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) ||
       (day > 31 || day < 1)){
        
        cout << "Atributo dia Inválido" << endl; 
        day = 1;
    }

    Data data = {day, month, year};

    while (daysMore--){
        data.nextDay();
    }

    if(data.get_day() < 10) cout << "0" << data.get_day() << "/";
    else cout << data.get_day() << "/";

    if(data.get_month() < 10) cout << "0" << data.get_month() << "/";
    else cout << data.get_month() << "/";

    cout << data.get_year() << endl;

    return 0;
}