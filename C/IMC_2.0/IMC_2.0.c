#include <stdio.h>

int main(void){
    float peso, altura;
    float imc;

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite o seu peso, em quilogramas:");
    scanf("%f", &peso);

    imc = ( peso / (altura * altura));

    if(imc > 0 && imc <= 18,5){
        printf("Voce esta abaixo do peso recomendavel");
    }
    else if(imc > 18,5 && imc <= 25){
        printf("Voce esta com peso normal");
    }
    else if(imc > 25 && imc <= 30){
        printf("Voce esta com sobrepeso");
    }
    else if( imc > 30){
        printf("Voce tem obesidade, cuide-se.");
    }
    else{
        printf("Dados invalidos!");
        return 1;
    }

return 0;
}
