#include <stdio.h>
#include <math.h>

typedef struct{
    int X;
    int Y;
}Ponto;

double distancia_ao_quadrado(Ponto P[]){
    if(P[0].X >= P[1].X){ 
        return (pow((P[0].X - P[1].X), 2)) + (pow((P[0].Y - P[1].Y), 2));
    }
    else{
        return (pow((P[1].X - P[0].X), 2)) + (pow((P[1].Y - P[0].Y), 2));
    }
}   

int main(void){
    Ponto P[2];
    double distancia;

    for(int i = 0; i < 2; i++){
        scanf("%d %d", &P[i].X, &P[i].Y);
    }

    distancia = distancia_ao_quadrado(P);
    printf("%.0lf\n", distancia);

    return 0;
}