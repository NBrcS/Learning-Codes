#include <stdio.h>

int main(void){
    float altura, peso;
    float imc;
        printf("Informe sua altura: ");
            scanf("%f", &altura);
        printf("Informe sue peso: ");
            scanf("%f", &peso);

                imc = peso / ( altura * altura );

        printf("Seu IMC resultou em um valor de %.3f", imc);

    return 0;
}
