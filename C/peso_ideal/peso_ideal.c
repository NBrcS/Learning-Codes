#include <stdio.h>


int main(void){
    char sexo;
    float h, peso_ideal;
    printf("Digite seu sexo, digite 'h' para homem e 'm' para mulher:  ");
    scanf("%c", &sexo);
    printf("Digite sua altura: ");
    scanf("%f", &h);
        if(sexo == 'h'){
            peso_ideal = (h * 72.7) - 58;
        }
        else if(sexo == 'm'){
            peso_ideal = (h * 62.1) - 44.7;
        }

    printf("Seu peso ideal eh %.2f kg. ", peso_ideal);
    return 0;
}
