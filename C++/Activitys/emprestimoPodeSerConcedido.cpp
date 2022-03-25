#include <iostream>

using namespace std;

int main(){
    double salario, emprestimo;
    int prestacoes;

    do{
        cin >> salario;
    }while(salario <= 0);
    
    do{
        cin >> emprestimo;
    }while(emprestimo <= 0);
    
    do{
        cin >> prestacoes;
    }while(prestacoes <= 0);

    if((emprestimo / prestacoes) < (3.0 / 10) * emprestimo) cout << "Emprestimo pode ser concedido" << endl;
    else cout << "Emprestimo nao pode ser concedido" << endl;

    return 0;
}