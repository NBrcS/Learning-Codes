#include <stdio.h>

int main (void){
    int T;
    int A, B, C, D, E;
    int contador = 0;
    
    scanf("%d", T);
   
    scanf("%d", A);
    if(A == T){
        contador++;
    }
    
    scanf("%d", B);
    if(B == T){
        contador++;
    }

    scanf("%d", C);
    if(C == T){
        contador++;
    }

    scanf("%d", D);
    if(D == T){
        contador++;
    }

    scanf("%d", E);
    if(E == T){
        contador++;
    }

    printf("%d\n", contador);

    return 0;
}