#include <stdio.h>

int main(void){
    float diametro;
    float raio, area, perimetro;

        printf("Digite o diametro do circulo: ");
            scanf("%f", &diametro);

                raio = diametro / 2;
                area = 3.14 * ( raio * raio );
                perimetro = 2 * 3.14 * raio;

        printf("\nO raio do circulo de diametro %.2f eh %.2f\n", diametro, raio);
        printf("A area do circulo de diametro %.2f eh %.2f\n", diametro, area);
        printf("O perimetro do circulo de diametro %.2f eh %.2f\n", diametro, perimetro);

    return 0;
}
