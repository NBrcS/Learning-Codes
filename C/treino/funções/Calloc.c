#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p = (int *) calloc(10, sizeof(int));

    for(int i = 0; i < 10; i++){
        printf("Endereco de p%i = %p\nValor de p%i = %d\n\n", i, &p[i], i, p[i]);
        p[i] = 2;
        printf("Endereco de p%i = %p\nValor de p%i = %d\n\n", i, &p[i], i, p[i]);
        
    }

    return 0;
}