#include <stdio.h>

#define TAM_MAX 10

int esparsa(int matriz[][TAM_MAX], int linha, int coluna){
    int zeros = 0, valores = 0;

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){ 
            if(matriz[i][j] == 0){
                zeros++;
            }

            valores++;
        }
    }

    if((1.0*zeros / valores) > 0.7){
        return 1;
    }
    else if((1.0*zeros / valores) < 0.7){
        return 0;
    }
}

int main(void){
    int matriz[TAM_MAX][TAM_MAX];
    int linha, coluna;

    scanf("%d %d", &linha, &coluna);

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }  

    if(esparsa(matriz, linha, coluna) == 1){
        printf("A matriz é esparsa\n");
    }
    else{
        printf("A matriz não é esparsa\n");
    }


    return 0;
}