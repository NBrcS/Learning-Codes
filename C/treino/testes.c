#include <stdio.h>
#include <string.h>
 
#define N_PRODUTOS 3

typedef enum {UNIDADE, PESO} tTipoDeQuantidade;

typedef union{
    double peso;
    int unidades;
}tTipo;

typedef struct{
    char desc[31];
    double preco;
    tTipo quantidade; 
    tTipoDeQuantidade tipo_de_quantidade;  
}tProduto;

void Trim(char *str){
    if(str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = '\0';
}

int main(void){
    tProduto produto[N_PRODUTOS];
    int i, tipoproduto;
    double precofinal = 0;

    printf("\n-----------------------------------\n\n");
    for(i = 0; i < N_PRODUTOS; i++){
        printf("\tDescricao do produto %d: ", i + 1);
        fgets(produto[i].desc, 31, stdin);
        Trim(produto[i].desc);

        printf("\tDigite o preco do produto: ");
        scanf("%lf", &produto[i].preco);

        printf("\tDigite o tipo do produto %d, [ 0 ] para unidades e [ 1 ] para peso: ", i + 1);
        scanf("%d", &produto[i].tipo_de_quantidade);
        if(produto[i].tipo_de_quantidade == 0){
            produto[i].tipo_de_quantidade = UNIDADE;

            printf("\tDigite a quantidade de produtos comprados: ");
            scanf("%d%*c", &produto[i].quantidade.unidades);
            
            precofinal += produto[i].preco * produto[i].quantidade.unidades;
        }
        else if(produto[i].tipo_de_quantidade == 1){
            produto[i].tipo_de_quantidade = PESO;

            printf("\tDigite o peso da compra: ");
            scanf("%lf%*c", &produto[i].quantidade.peso);
            
            precofinal += produto[i].preco * produto[i].quantidade.peso;
        }

        printf("\n");
    }

    printf("\n-----------------------------------\n\n");
    for(i = 0; i < N_PRODUTOS; i++){ 
        printf("produto \'%s\'\n", produto[i].desc);
        printf("preço unitário ou por kg: %d\n", produto[i].preco);
        printf("Total da compra: %.2lf\n", precofinal);
    }
    printf("\n-----------------------------------\n");

    return 0;
}