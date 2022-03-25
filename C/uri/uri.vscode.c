#include <stdio.h>

double AdicioneNaMedia(double valor){
    double media;
    static double soma = 0;
    static int contador = 1;

    int i;

    for(i = 0; i <= 5; i++){
        comandos
    }







    soma = soma + valor;
    media = soma / contador;
    contador++;

    return media;
}

int main(void){
    int casos, i;
    double valor;

    printf("Digite a quantidade de valores a serem lidos: ");
    scanf("%d", &casos);
    for(i = 1; i <= casos; i++){
        printf("Digite um valor: ");
        scanf("%lf", &valor);
        printf("Media ate o momento: %.2lf\n\n", AdicioneNaMedia(valor));
    }

    return 0;
}

