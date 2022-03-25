#include <iostream>

int main (void){
    int Numb;

    std::cout << "Qual o valor? ";
    std::cin >> Numb;
    std::cout << "Valor recebido." << std::endl << std::endl;

    std::cout << "O valor digitado foi: " << Numb << std::endl;

    return 0;
}