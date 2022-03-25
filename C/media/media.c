#include <stdio.h>

int main(void){
    float nota1, nota2, nota3;
    float media;
        printf("Insira a primeira nota: ");
            scanf("%f", &nota1);
        printf("Insira a segunda nota: ");
            scanf("%f", &nota2);
        printf("Insira a terceira nota: ");
            scanf("%f", &nota3);
                media = ((nota1 + nota2 + nota3) / 3 );
        printf("A media foi: %.2f", media);


    return 0;
}
