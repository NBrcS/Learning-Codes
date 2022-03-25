#include <stdio.h>

int main(void){
    int valor;
    int menor, maior;

    printf("Digite um valor: ");
    scanf("%d", &valor);
    maior = valor;
    menor = valor;

    while(valor != 0){
        printf("\nDigite `0` para encerrar o calculo.\n");
        printf("Digite outro valor: ");
        scanf("%d", &valor);
        if(valor > maior){
            maior = valor;
        }
        else if(valor < menor && valor != 0){
            menor = valor;
        }
        else{

        }
    }

    printf("O menor valor eh o %d, e o maior eh o %d", menor, maior);

return 0;
}
