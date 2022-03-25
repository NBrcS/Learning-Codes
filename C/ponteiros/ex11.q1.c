#include <stdio.h>
#include <math.h>

void CalculaHexagono(float l, float *Area, float *Perimetro){

    *Area = ((3 * (pow(l, 2)) * sqrt(3)) / 2);
    *Perimetro = 6 * l;

}

int main(void){
    float lado;
    float area, perimetro;
    float *A = &area, *P = &perimetro;

    printf("Digite o lado do hexagono regular: ");
    scanf("%f", &lado);

    CalculaHexagono(lado, A, P);

    printf("\n"
           "Lado do hexagono: %.2f\n"
           "Area do hexagono: %.2f\n"
           "Perimetro do hexagono: %.2f\n"
            , lado, area, perimetro);

    return 0;
}
