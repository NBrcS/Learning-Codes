#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto;
	int contador = 0;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;
	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        contador++;

            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
	}

	printf("Numero de tentativas: %d\n", contador);
    puts("Voce acertou!");
	return 0;
}
