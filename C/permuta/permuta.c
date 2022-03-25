#include <stdio.h>

int main(void){
    int a, b;
    int aux;

	/* a entrada de dados nao pode ser alterada */
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

	/* esse printf nao pode ser alterado nem removido. */
    printf("\nOs valores lidos para a e b foram: %d e %d\n", a, b);

        aux = b; // aux = primeiro valor de b
        b = a; // b = primeiro valor de a
        a = aux; // a = primeiro valor de b


	/* esse printf nao pode ser alterado nem removido e nada pode ser alterado apos ele. */
    printf("\nOs novos valores de a e b sao: %d e %d\n", a, b);

    return 0;
}
