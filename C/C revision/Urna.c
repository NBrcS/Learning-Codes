#include <stdio.h>
#include <string.h>

#define TAM_MAX 101

typedef struct{
    int Numero;
    char Nome[TAM_MAX];

}registro;

void remove_endl(char str[]){
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
}

int mais_votos(int votos[], int candidatos){
    int maior = -1;
    int voto_de_cada = -1;

    for(int i = 0; i < candidatos; i++){
        if(votos[i] > voto_de_cada){
            voto_de_cada = votos[i];
            maior = i;
        }
    }

    return maior;
}

int main(void){ 
    int quantos_candidatos, opcao, maior, valido;
    int total_votos = 0, nulos = 0;

    scanf("%d%*c", &quantos_candidatos);

    registro candidatos[quantos_candidatos];
    int votos[quantos_candidatos];

    for(int i = 0; i < quantos_candidatos; i++){
        scanf("%d%*c", &candidatos[i].Numero);
        fgets(candidatos[i].Nome, TAM_MAX, stdin);
        remove_endl(candidatos[i].Nome);

        votos[i] = 0;
    }
    while(1){
        valido = 0;
        scanf("%d%*c", &opcao);

        if(opcao > 0){
            for(int i = 0; i < quantos_candidatos; i++){
                if(opcao == candidatos[i].Numero){
                    votos[i]++;
                    total_votos++;
 
                    valido = 1;
                }
            }
            if(valido == 0){
                nulos++;
                total_votos++;
            }
        }     
        else{
            break;
        }
    }
    maior = mais_votos(votos, quantos_candidatos);
    for(int i = 0; i < quantos_candidatos; i++){
        if(i == maior){
            printf("%.2lf - %d - %s VENCEDOR\n", 100*(1.0*votos[i] / total_votos), candidatos[i].Numero, candidatos[i].Nome);
        }
        else{
            printf("%.2lf - %d - %s\n", 100*(1.0*votos[i] / total_votos), candidatos[i].Numero, candidatos[i].Nome);      
        }
    }
 
    printf("%.2f - Nulos\n", 100*(1.0*nulos / total_votos));
 
    return 0;
}