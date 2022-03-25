#include <stdio.h>

int main(void){
    int segundos, minutos, horas;
        printf("Digite o tempo, em segundos: ");
          scanf("%d", &segundos);
              horas = segundos / 3600;
              minutos = (segundos % 3600) / 60;
              segundos = segundos % 60;
          printf("O tempo digitado em segundo resultou em, horas, minutos, e segundos, respectivamente: %d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
