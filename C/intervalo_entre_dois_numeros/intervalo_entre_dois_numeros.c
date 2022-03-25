#include <stdio.h>

int main(void){
    int valor1, valor2;
    int i;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    if(valor1 < valor2){
        i = valor1;
        while(i <= valor2){
            printf("%d\n", i);
            i++;
        }
    }
    else if(valor2 < valor1){
        i = valor2;
        while(i <= valor1){
            printf("%d\n", i);
            i++;
        }
    }
    else{
        printf("Nao existem numeros entre esses valores.");
    }
return 0;
}
