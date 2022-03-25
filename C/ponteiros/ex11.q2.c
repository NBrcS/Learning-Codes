#include <stdio.h>
#include <math.h>

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){
    float delta;

    if(a == 0){
        return -1;
    }
    else{
        delta = ((pow(b, 2)) - (4 * a * c));
        if(delta < 0){
            return -2;
        }
        else{
            *x1 = ((-b + sqrt(delta)) / 2);
            *x2 = ((-b - sqrt(delta)) / 2);
            return 0;
        }
    }
}

int main(void){
    float a, b, c;
    float X1, X2;
    float *x1 = &X1, *x2 = &X2;

    printf("Digite o valor do coeficiente A: ");
    scanf("%f", &a);
    printf("Digite o valor do coeficiente B: ");
    scanf("%f", &b);
    printf("Digite o valor do coeficiente C: ");
    scanf("%f", &c);
    printf("\n");

    if(ResolveEquacao2Grau(a, b, c, x1, x2) == 0){
        if(X1 != X2){
            printf("A raiz x1 eh: %.2f\n"
                   "A raiz x2 eh: %.2f\n"
                   "\n"
                   "A operacao foi concluida com sucesso.\n"
                   , X1, X2);
           return 0;
        }
        else{
            printf("A raiz eh: %.2f\n"
                   "\n"
                   "A operacao foi concluida com sucesso.\n"
                   , X1);
            return 0;
        }
    }
    else if(ResolveEquacao2Grau(a, b, c, x1, x2) == -1){
        printf("Os coeficientes nao forma uma equacao de segundo grau.\n"
               "Houve uma falha na operacao.\n");
               return -1;
    }
    else{
        printf("A equacao nao possui raizes.\n"
               "Houve uma falha na operacao.\n");
               return -2;
    }

}
