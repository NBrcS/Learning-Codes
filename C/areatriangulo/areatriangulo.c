#include <stdio.h>

int main(void){
    int b, h;
    float area;

        printf("Digite o valor da base do triangulo: ");
            scanf("%d", &b);
        printf("Digite o valor da altura do triangulo: ");
            scanf("%d", &h);

                area = ( b * h ) / 2;

        printf("O triangulo de base %d e altura %d tem area de %f", b, h, area);

    return 0;
}
