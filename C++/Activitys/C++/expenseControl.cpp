#include <iostream>

using namespace std;

class Expense{
    private:
        string name;
        string expenseType;
        double price;

    public:
        Expense(double = 0);
        
        void setName(string);
        void setExpenseType(string);
        void setPrice(double);
        string getName();
        string getExpenseType();
        double getPrice();
};


class ExpenseControl : public Expense{
    private:
        Expense expensesArray[100];
    
    public:
        void setExpense(Expense, int);
        Expense getExpense(int);

        double totalExpenses();
        double totalExpenses(string);
        bool typeExpenseExist(string);
};

int main(){
    int N;
    double D_info;
    string S_info;
    ExpenseControl control;
    Expense expense;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++){
        getline(cin, S_info);
        expense.setName(S_info);

        cin >> D_info;
        cin.ignore();
        expense.setPrice(D_info);

        getline(cin, S_info);
        expense.setExpenseType(S_info);

        control.setExpense(expense, i);
    }
    getline(cin, S_info);

    if(control.typeExpenseExist(S_info) == false) cout << "Nenhuma despesa do tipo especificado" << endl;
    else{
        for(int i = 0; i < 100; i++){
            if((control.getExpense(i).getExpenseType().find(S_info)) != -1){
                cout << control.getExpense(i).getName() << ", R$ ";
                cout << control.getExpense(i).getPrice() << endl;
            }
        }
        
    } 
    cout << "Total: " << control.totalExpenses(S_info) << "/" << control.totalExpenses() << endl;
    
    return 0;
}

Expense::Expense(double Price){ this->price = Price; }

void Expense::setName(string Name){ this->name = Name; }
void Expense::setExpenseType(string ExpenseType){ this->expenseType = ExpenseType; }
void Expense::setPrice(double Price){ this->price = Price; }
string Expense::getName(){ return this->name; }
string Expense::getExpenseType(){ return this->expenseType; }
double Expense::getPrice(){ return this->price; }


void ExpenseControl::setExpense(Expense expanse, int index){ this->expensesArray[index] = expanse; }
Expense ExpenseControl::getExpense(int index){ return this->expensesArray[index]; }

double ExpenseControl::totalExpenses(){
    double sum = 0;

    for(int i = 0; i < 100; i++){
        sum = sum + this->expensesArray[i].getPrice();
    }

    return sum;
}
double ExpenseControl::totalExpenses(string type){
    double sum = 0;

    for(int i = 0; i < 100; i++){
        if(this->expensesArray[i].getExpenseType() == type){
            sum = sum + this->expensesArray[i].getPrice();
        }
    }

    return sum;
}
bool ExpenseControl::typeExpenseExist(string type){
    bool Exist = false;

    for(int i = 0; i < 100; i++){
        if((this->expensesArray[i].getExpenseType().find(type)) != -1) Exist = true;
    }

    return Exist;
}