#include <stdio.h>

int main(void){
    int valor;
    int soma = 0;
    int contador = 0;
    float media;

    printf("Digite um valor: ");
    scanf("%d", &valor);
    soma += valor;
    contador++;

    while(valor != 0){
        printf("Digite `0` caso queira encerrar o calculo.\n");
        printf("Digite mais um valor: ");
        scanf("%d", &valor);
        soma += valor;
        contador++;
    }

    media = (soma / contador);

    printf("\n A soma de seus %d valores resultou em: %d.\n A media, entre a soma e o numeros de valores digitados foi: %.2f", contador, soma, media);

return 0;
}
