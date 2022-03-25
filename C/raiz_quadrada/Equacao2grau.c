#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c;
    float delta, raiz1, raiz2;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    if( a == 0 ){
        printf("Esta nao eh uma equacao de segundo grau");
        return 1;
    }

    delta = (pow(b, 2) - (4 * a * c));
    if(delta < 0){
        printf("Esta equacao de segundo grau nao possui raizes");
        return 2;
    }
    else if(delta == 0){
        printf("Esta equacao possui apenas uma raiz real.\n");
        raiz1 = ( (( - b ) / 2 * a));
        printf("sua raiz eh: %f", raiz1);
    }
    else if(delta > 0){
        raiz1 = ( (( - b ) + (sqrt(delta)) / 2 * a));
        raiz2 = ( (( - b ) - (sqrt(delta)) / 2 * a));
        printf("Sua primeira raiz eh: %.2f\n", raiz1);
        printf("Sua segunda raiz eh: %.2f\n", raiz2);
    }
return 0;
}
