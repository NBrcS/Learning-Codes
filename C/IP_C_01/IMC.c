#include <stdio.h>

int main(){
    double weight, height, imc;

    scanf("%lf", &weight);
    scanf("%lf", &height);

    imc = (weight / (height * height));
    if(imc < 18.5) printf("Abaixo do peso\n");
    else if( imc >= 18.5 && imc < 25) printf("Peso normal\n");
    else if( imc >= 25 && imc < 30) printf("Sobrepeso\n");
    else if( imc >= 30) printf("Obesidade\n");

    return 0;
}