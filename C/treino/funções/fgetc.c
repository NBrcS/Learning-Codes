#include <stdio.h>

#define TAM_MAX 101

int main(void){
    char x[TAM_MAX];
    int i;

    i = 0;
    while((x[i] = fgetc(stdin)) != '\n'){
        i++;
    }
    x[i] = '\0';

    printf("%s\n", x);
    
    return 0;
}

//comentar um dos codigos para que o outro funcione
//colocar os arquivos do parametro do diretorio do arquivo .exe e do arquivo fonte (.c)

#include <stdio.h>

#define TAM_MAX 101

int main(void){
    char x[TAM_MAX];
    int i;

    FILE *file;
    file = fopen("entrada2.txt", "r");

    i = 0;
    while((x[i] = fgetc(file)) != EOF){
        i++;
    }
    x[i] = '\0';

    printf("%s\n", x);

    return 0;
}