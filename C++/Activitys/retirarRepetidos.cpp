/*

Implemente um programa que recebe o tamanho N de um vetor À e depois recebe N números
inteiros maiores que zero é os armazena no vetor À. Considere que o usuário digitará sempre
valores maiores que zero. O programa deve remover os números repetidos trocando-os por
zero. Depois o programa deve imprimir os elementos do vetor sem imprimir os com valor igual a zero

*/

#include <iostream>

using namespace std;

int main(){
    int N;


    cin >> N;
    int vetor[N];

    for(int i = 0; i < N; i++){
        cin >> vetor[i];
    }

    for(int i = 0; i < N; i++){
        if(vetor[i] != 0){ 
            for(int j = i; j < N; j++){
                if(vetor[i] == vetor[j + 1]){
                    vetor[j + 1] = 0;
                }
            }
        }
    }

    for(int i = 0; i < N; i++){
        if(vetor[i] != 0){
            cout << vetor[i] << " "; 
        }
    }

    return 0;
}