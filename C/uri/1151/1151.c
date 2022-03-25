#include <stdio.h>

int main()
{
    int N, i;
    int Quantia, Total = 0;
    char Tipo;

    int S = 0, R = 0, C = 0;
    float pS, pR, pC;

    scanf("%d", &N);
    printf("a\n");
    for(i = 0; i < N; i++){
        printf("b\n");
        scanf("%d%*c", &Quantia);
        scanf(" %c", &Tipo);

        if(Tipo == 'C' || Tipo == 's'){
            C = C + Quantia;
            Total = Total + Quantia;
        }
        else if(Tipo == 'S' || Tipo == 's'){
            S = S + Quantia;
            Total = Total + Quantia;
        }
        else if(Tipo == 'R' || Tipo == 'r'){
            R = R + Quantia;
            Total = Total + Quantia;
        }
    }

    pS = 100.0 * S / Total;
    pR = 100.0 * R / Total;
    pC = 100.0 * C / Total;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\n"
           "Total de sapos: %d\nPercentual de coelhos: %.2f %%\n"
           "Percentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",
           Total, C, R, S, pC, pR, pS);

    return 0;
}
