#include <stdio.h>

void exibir_matriz(int linhas, int colunas, int a[][colunas], int b[][colunas]){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    int colunas, linhas;
    char Clear_Buffer;

    scanf("%d", &linhas);
    scanf("%c", &Clear_Buffer);
    scanf("%d", &colunas);
    scanf("%c", &Clear_Buffer);


    int A[linhas][colunas];
    int B[linhas][colunas];
    
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%d", &A[i][j]);
            scanf("%c", &Clear_Buffer);
        }
    }
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%d", &B[i][j]);
            scanf("%c", &Clear_Buffer);
        }
    }

    exibir_matriz(linhas, colunas, A, B);

    return 0;
}