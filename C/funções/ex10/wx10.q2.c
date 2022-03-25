#include <stdio.h>
#include <math.h>

int EhTrianguloRetangulo(int catetoA, int catetoB, int hipotenusa){
    if((pow(catetoA, 2) + pow(catetoB, 2)) == pow(hipotenusa, 2)){
        return 1;
    }
    else{
        return 0;;
    }
}

int FormaTrianguloRetangulo(int catetoA, int catetoB, int hipotenusa){

    if(catetoA <0 && catetoB < 0){
        return -1;
    }
    else if(catetoA <= 0){
        while((pow(catetoA, 2) + pow(catetoB, 2) == pow(hipotenusa, 2))){
            catetoA++;
            if(catetoA >= hipotenusa){
                return -1;
            }
        }
        return catetoA;
    }
    else if(catetoB <= 0){
        while((pow(catetoA, 2) + pow(catetoB, 2) == pow(hipotenusa, 2))){
            catetoB++;
            if(catetoB >= hipotenusa){
                return -1;
            }
        }
        return catetoB;
    }
    else if(hipotenusa <= 0 ){
        return -1;
    }
}

int hipotenusa(int catetoA, int catetoB){
    int hipotenusa;

    hipotenusa = sqrt((pow(catetoA, 2) + pow(catetoB, 2)));

    return hipotenusa;
}

int main(void){
    int a, b, c;

    printf("Digite o valor do cateto A: ");
    scanf("%d", &a);
    printf("Digite o valor do cateto B: ");
    scanf("%d", &b);
    printf("Digite o valor da hipotenusa: ");
    scanf("%d", &c);

    if(a > 0 && b > 0 && c > 0){
        if(EhTrianguloRetangulo(a, b, c) == 1){
            printf("Eh um triangulo retangulo\n");
        }
        else{
            printf("Nao eh um triangulo retangulo\n");
        }
    }
    else{
        if(FormaTrianguloRetangulo(a, b, c) == -1){
            puts("Valores invalidos");
        }
        else{
            if(a < 0){
                printf("Para formar o triangulo retangulo, o cateto A foi mudado de %d para %d, ficando assim:\n"
                       "Cateto A: %d\n"
                       "Cateto B: %d\n", a, (FormaTrianguloRetangulo(a, b, c)), (FormaTrianguloRetangulo(a, b, c)), b);
            }
            else{
                 printf("Para formar o triangulo retangulo, o cateto B foi mudado de %d para %d, ficando assim:\n"
                       "Cateto A: %d\n"
                       "Cateto B: %d\n", b, (FormaTrianguloRetangulo(a, b, c)), a, (FormaTrianguloRetangulo(a, b, c)));
            }
        }
    }

    return 0;
}
