#include <stdio.h>

int main(void){
    char progressao;
    int razao, t1, n;
    int soma = 0;

    printf("Digite a progressao a ser realizada, `a` para Aritmetica e `g` para geometrica: ");
    scanf("%c", &progressao);
    printf("Digite o primeiro termo t1: ");
    scanf("%d", &t1);
    printf("Digite a razao r: ");
    scanf("%d", &razao);
    printf("Digite o numero de termos n da progressao: ");
    scanf("%d", &n);
    if(progressao == 'a'){
        printf("%d\n", t1);
        soma += t1;
        while(n > 1){
            t1 = t1 + razao;
            printf("%d\n", t1);
            soma += t1;

            n--;
        }

    }
    else if(progressao == 'g'){
        printf("%d\n", t1);
        soma += t1;
        while(n > 1){
            t1 = t1 * razao;
            printf("%d\n", t1);
            soma += t1;

            n--;
        }

    }
    else{
        printf("Termo invalido");
    }

    printf("Soma de todos os termos: %d", soma);

return 0;
}
