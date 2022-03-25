
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto;
	int contador = 0;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;
    printf("Voce tem 5 tentativas!\n");
	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        contador++;

            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
        if(contador < 5){
            printf("Voce tem mais %d tentativas!\n\n", (5 - contador));
        }
        else{
            return 0;
        }

	}
    puts("Voce acertou!");
	return 0;
}
