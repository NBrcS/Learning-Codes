#include <stdio.h>
#include <math.h>

typedef struct{
    int X;
    int Y;
}Ponto;

Ponto Mais_proximo(Ponto ponto[], Ponto p_inicial, int N_pontos){
    double distancia = 100000000;
    Ponto mais_proximo;

    for(int i = 0; i < N_pontos; i++){
         if((sqrt(pow((ponto[i].X - p_inicial.X), 2) + pow((ponto[i].Y - p_inicial.Y), 2))) < distancia){
             distancia = (sqrt(pow((ponto[i].X - p_inicial.X), 2) + pow((ponto[i].Y - p_inicial.Y), 2)));
             mais_proximo = ponto[i];
         }
    }

    return mais_proximo;
};

int main(void){
    Ponto p1, mais_proximo;
    int N;
    
    scanf("%d", &p1.X);
    scanf("%d", &p1.Y);

    scanf("%d", &N);
    Ponto P[N];
    
    for(int i = 0; i < N; i++){ 
        scanf("%d", &P[i].X);
        scanf("%d", &P[i].Y);
    }
    mais_proximo = Mais_proximo(P, p1, N);

    printf("Ponto mais perto é (%d,%d)\n", mais_proximo.X, mais_proximo.Y);  

    return 0;
}