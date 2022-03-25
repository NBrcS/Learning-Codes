#include <stdio.h>
#include <math.h>

float discriminante(float a, float b, float c){
    float discriminante;
    discriminante = ((pow(2, b)) - (4 * a * c));

    return discriminante;
}

float RaizX1(float a, float b, float delta){
    float RaizX1;
    RaizX1 = (((-b) + sqrt(delta)) / (2 * a));

    return RaizX1;
}

float RaizX2(float a, float b, float c){
    float RaizX2;
    RaizX2 = ((( - b) - sqrt(discriminante(a, b, c))) / (2 * a));

    return RaizX2;
}

int main(void){
    float a, b, c;
    float delta;

    printf("Digite o valor do coeficiente 'a': ");
    scanf("%f", &a);

    if(a < 0){
        printf("O coeficiente 'a' nao pode ser negativo.\n");
        return 1;
    }

    printf("Digite o valor do coeficiente 'b': ");
    scanf("%f", &b);
    printf("Digite o valor do coeficiente 'c': ");
    scanf("%f", &c);

    delta = discriminante(a, b, c);
    if(delta < 0){
        return 2;
    }

    printf("Esta equacao possui raizes %.2f e %.2f.\n", RaizX1(a, b, delta), (RaizX2(a, b, c)));

return 0;
}
