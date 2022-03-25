#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um outro numero: ");
    scanf("%d", &b);
    printf("Digite um terceiro numero: ");
    scanf("%d", &c);

    if(a > b && a > c){
        printf("O maior eh o valor: %d", a);
    }
    else if(b > a && b > c){
        printf("O maior eh o valor: %d", b);
    }
    else if(c > a && c > b){
        printf("O maior eh o valor: %d", c);
    }

return 0;
}
