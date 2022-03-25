#include <stdio.h>

int main(void){
    int numero, aux;
    int contagem = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int cont = 1; cont <= numero; cont++){
        aux = numero;
        numero = numero % cont;

        if(numero == 0){
            contagem++;
        }

        numero = aux;
    }

    if(contagem == 2){
        printf("numero primo.\n");
    }
    else{
        printf("numero nao primo.\n");
    }

return 0;
}
