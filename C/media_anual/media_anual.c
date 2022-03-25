#include <stdio.h>

int main(void){
    float media1, media2, media3, media4;
    float media_anual;

        printf("Digite a sua media do bimestre 1: ");
            scanf("%f", &media1);
        printf("Digite a sua media do bimestre 2: ");
            scanf("%f", &media2);
        printf("Digite a sua media do bimestre 3: ");
            scanf("%f", &media3);
        printf("Digite a sua media do bimestre 4: ");
            scanf("%f", &media4);

                media_anual = (( media1 * 1 ) + ( media2 * 2 ) + ( media3 * 3) + (media4 * 4)) / 10;

        printf("Sua media anual foi de %.2f", media_anual);

    return 0;
}
