#include <stdio.h>

int main(void){
    float nota1, nota2, nota3, nota4, nota5, nota6;
    float media1, media2, media3, media_semestre;

    printf("Primeira nota da primeira prova da primeira avaliacao: ");
    scanf("%f", &nota1);
    printf("Segunda nota da segunda prova da primeira avaliacao: ");
    scanf("%f", &nota2);
    if(nota1 >= nota2){
        media1 = (nota1 * 6 + nota2 * 4)/ 10;
    }else{
        media1 = (nota2 * 6 + nota1 * 4)/ 10;
    }
    printf("Media da primeira avaliacao = %.2f\n\n", media1);

    printf("Primeira nota da primeira prova da segunda avaliacao: ");
    scanf("%f", &nota3);
    printf("Segunda nota da segunda prova da segunda avaliacao: ");
    scanf("%f", &nota4);
    if(nota3 >= nota4){
        media2 = (nota3 * 6 + nota4 * 4)/ 10;
    }else{
        media2 = (nota4 * 6 + nota3 * 4)/ 10;
    }
    printf("Media da segunda avaliacao = %.2f\n\n", media2);

    printf("Primeira nota da primeira prova da terceira avaliacao: ");
    scanf("%f", &nota5);
    printf("Segunda nota da segunda prova da terceira avaliacao: ");
    scanf("%f", &nota6);
    if(nota5 >= nota6){
        media3 = (nota5 * 6 + nota6 * 4)/ 10;
    }else{
        media3 = (nota6 * 6 + nota5 * 4)/ 10;
    }
    printf("Media da terceira avaliacao = %.2f\n\n", media3);

    media_semestre = (media1 + media2 + media3)/3;
    printf("Media semestral: %.2f\n", media_semestre);

    if(media_semestre < 5){
        printf("Conceito: F");
    }else if(media_semestre >= 5 && media_semestre < 6){
        printf("Conceito: E");
    }else if(media_semestre >= 6 && media_semestre< 7){
        printf("Conceito: D");
    }else if(media_semestre >= 7 && media_semestre < 8){
        printf("Conceito: C");
    }else if(media_semestre >= 8 && media_semestre < 9){
        printf("Conceito: B");
    }else if(media_semestre >= 9 && media_semestre <= 10){
        printf("Conceito: A");
    }
    return 0;
}
