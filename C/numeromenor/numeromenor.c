#include <stdio.h>


int main(void){
    int a, b;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &b);
        if(a > b){
            printf("O maior eh o %d", a);
        }
        else if(b > a){
            printf("O maior eh o %d", b);
        }
        else{
            printf("ambos os numeros digitados são iguais");
        }
    return 0;
}
