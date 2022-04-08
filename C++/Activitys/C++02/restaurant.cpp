#include <iostream>
#include <iomanip>

#define Size_Max 51

using namespace std;

class Order{
    private: 
        string number;
        string desc;
        int howMany;
        double price;

    public:
        Order(){};
        Order(string, string, int, double);

        void setNumber(string);
        void setDesc(string);
        void setHowMany(int);
        void setPrice(double);
        string getNumber();
        string getDesc();
        int getHowMany();
        double getPrice();

        double getTotal();
};

class RestaurantTable{
    private:
        Order orders[Size_Max];

    public:
        RestaurantTable(){};

        Order getOrder(int);

        void addOrder(Order);
        void cleanOrders();
        double totalCalculate();
        void printAccount();

};

class Restaurant{
    private:
        RestaurantTable table[Size_Max];

    public:
        Restaurant(){};
  
        void addOrder(Order o, int tableIndex);
        double totalRestaurantCalculate();
        RestaurantTable getTable(int tableIndex);
};


int main(){
    cout << fixed << setprecision(2);

    string code;
    string s_info;
    int i_info;
    double d_info;

    Restaurant restaurant;
    Order order;
    do{
        getline(cin, code);
        order.setNumber(code);

        getline(cin, s_info);
        order.setDesc(s_info);

        cin >> i_info;
        cin.ignore();
        order.setHowMany(i_info);

        cin >> d_info;
        cin.ignore();
        order.setPrice(d_info);

        cin >> i_info;
        cin.ignore();
        restaurant.addOrder(order, i_info);
    }while(code != "-1");
        
    for(int i = 0; i < Size_Max; i++){
        if(restaurant.getTable(i).getOrder(0).getHowMany() != 0){

            cout << "Mesa " + i << endl;
            restaurant.getTable(i).printAccount();
            cout << "Total: R$ " << restaurant.getTable(i).totalCalculate() << endl << endl;

        }
    }
    cout << "Total Restaurante: R$ " << restaurant.totalRestaurantCalculate();


    return 0;
}


//Order implements
Order::Order(string num, string desc, int how, double price){
    this->number = num;
    this->desc = desc;
    this->howMany = how;
    this->price = price;
}

void Order::setNumber(string num){
    this->number = num;
}
void Order::setDesc(string desc){
    this->desc = desc;
}
void Order::setHowMany(int how){
    this->howMany = how;
}
void Order::setPrice(double price){
    this->price = price;
}
string Order::getNumber(){
    return this->number;
}
string Order::getDesc(){
    return this->desc;
}
int Order::getHowMany(){
    return this->howMany;
}
double Order::getPrice(){
    return this->price;
}

double Order::getTotal(){
    return this->price * this->howMany;
}


//RestaurantTable implements
Order RestaurantTable::getOrder(int index){
    return this->orders[index];
}

void RestaurantTable::addOrder(Order o){
    bool found = false;

    for(int i = 0; i < Size_Max; i++){
        if(this->orders[i].getHowMany() != 0){ 
            if((this->orders[i].getDesc().find(o.getDesc())) != -1){
                orders[i].setHowMany(orders[i].getHowMany() + o.getHowMany());

                found = true;
            }
        }
        else break;
    }

    if(!found){
        for(int i = 0; i < Size_Max; i++){
            if(this->orders[i].getHowMany() == 0){
                orders[i] = o;

                break;
            }
        }
    }
}
void RestaurantTable::cleanOrders(){
    for(int i = 0; i < Size_Max; i++){
        if(this->orders[i].getHowMany() != 0){
            this->orders[i].setHowMany(0);
        }
        else break;
    }
}
double RestaurantTable::totalCalculate(){
    double sum = 0;

    for(int i = 0; i < Size_Max; i++){
        if(this->orders[i].getHowMany() != 0){
            sum += this->orders[i].getTotal();
        }
        else break;
    }

    return sum;
}
void RestaurantTable::printAccount(){
    for(int i = 0; i < Size_Max; i++){
        if(this->orders[i].getHowMany() != 0){
            cout << this->orders[i].getNumber() << " - ";
            cout << this->orders[i].getDesc() << " - ";
            cout << this->orders[i].getHowMany() << " - ";
            cout << this->orders[i].getPrice() << " - ";
            cout << "R$ " << this->orders[i].getTotal() << endl;
        }
        else break;
    }
}


//Restaurant implements
void Restaurant::addOrder(Order o, int tableIndex){
    for(int i = 0; i < Size_Max; i++){
        if(this->table[i].getOrder(0).getHowMany() != 0){
            this->table[i].addOrder(o);
        }
    }
}
double Restaurant::totalRestaurantCalculate(){
    double sum = 0.0;

    for(int i = 0; i < Size_Max; i++){
        if(this->table[i].getOrder(0).getHowMany() != 0){
            sum = sum + this->table[i].totalCalculate();
        }
    }

    return sum;
}
RestaurantTable Restaurant::getTable(int tableIndex){
    return this->table[tableIndex];
}