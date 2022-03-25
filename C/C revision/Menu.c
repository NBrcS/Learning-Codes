#include <stdio.h>

int main(void){
    int opcao = 0;

    do{
        printf("1 - Item 1\n");
        printf("2 - Item 2\n");
        printf("3 - Item 3\n");
        printf("4 - Sair\n");

        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            printf("Item 1\n");
            break;

        case 2:
            printf("Item 2\n");
            break;

        case 3:
            printf("Item 3\n");
            break;

        case 4:
            printf("Sair\n");
            break;

        default:
            printf("Opcao %d Invalida\n", opcao);
            break;
        }

    }while(opcao != 4);

    return 0;
}