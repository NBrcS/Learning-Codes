#include <stdio.h>
#include <string.h>

#define TAM_MAX 31

int main(void){
    char palavra[TAM_MAX];
    char aux1[TAM_MAX];
    char aux2[TAM_MAX];
    char resultado[TAM_MAX];
    int tamanho, contador, verdadeiro, inicio;
    int diferenca, auxdiferenca, comparacao, auxtamanho, posicao;

    while(scanf("%s", palavra) != EOF){
        tamanho = strlen(palavra);
        contador = 1;
        while(1){
            diferenca = tamanho - contador;
            
            for(inicio = 0; diferenca < tamanho; diferenca++, inicio++)
                aux1[inicio] = palavra[diferenca];
            
            inicio = 0;
            posicao = tamanho - (contador * 2);
            
            while(inicio < contador){
                aux2[inicio] = palavra[posicao];
                posicao++;
                inicio++;
            }
            
            comparacao = strcmp(aux1, aux2);
            if(comparacao == 0){
                tamanho = strlen(palavra);
                tamanho = tamanho - contador;

                for(contador = 0; contador < tamanho; contador++) 
                    resultado[contador] = palavra[contador];

                resultado[contador] = '\0';
                printf("%s\n", resultado);
            }
            break;
        }
    }

    return 0;
}