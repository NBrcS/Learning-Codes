#include <stdio.h>

int main(void){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade >= 0 && idade <= 21){
        printf("Voce eh jovem!");
    }
    else if(idade > 21 && idade <= 60){
        printf("Voce eh adulto!");
    }
    else if(idade > 60 && idade <= 120){
        printf("Voce eh idoso!");
    }
    else{
        printf("Voce digitou uma idade invalida!");
        return 1;
    }


return 0;
}
