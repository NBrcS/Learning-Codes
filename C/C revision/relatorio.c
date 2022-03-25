#include <stdio.h>
#include <string.h>

#define TAM_MAX 50

typedef struct{
    char descricao[50];
    float peso;
    char tipo;
}movel;

int main(void){
    int n, mais_pesado;
    int s_10kg = 0, com_real = 0;
    float peso = 0;

    scanf("%d%*c", &n);
    movel moveis[n];

    for(int i = 0; i < n; i++){

        fgets(moveis[i].descricao, TAM_MAX, stdin);
        moveis[i].descricao[strcspn(moveis[i].descricao, "\n")] = '\0';
        if(strstr(moveis[i].descricao, "Real") != NULL){
            com_real++;
        }

        scanf("%f%*c", &moveis[i].peso);
        if(moveis[i].peso > peso){
            peso = moveis[i].peso;
            mais_pesado = i;
        }

        scanf("%c%*c", &moveis[i].tipo);
        if(moveis[i].peso > 10 && moveis[i].tipo == 's'){
            s_10kg++;
        }
    }

    printf("Tipo 's' acima de 10Kg: %d\n", s_10kg);
    printf("Termina em \"Real\": %d\n", com_real);
    printf("Mais pesado: \"%s\"\n", moveis[mais_pesado].descricao);

    return 0;
}