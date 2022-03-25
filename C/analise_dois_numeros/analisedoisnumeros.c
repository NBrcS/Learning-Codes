#include <stdio.h>

int main(void){
    int a, b;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);

    if(a == b)
    {
        printf("Os numeros sao iguais.");
    }
    else
    {
        if(a > b)
        {
            printf("O valor maior eh: %d", a);
        }
        else
        {
            printf("O valor maior eh: %d", b);
        }
    }
return 0;
}
