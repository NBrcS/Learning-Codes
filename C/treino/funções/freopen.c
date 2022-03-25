#include <stdio.h>

#define TAM_MAX 101

int main(void){
    char x[TAM_MAX];

    fgets(x, TAM_MAX, stdin);
    printf("%s", x);

    freopen("entrada2.txt", "r", stdin);
    fgets(x, TAM_MAX, stdin);
    printf("%s", x);

    return 0;
}
//comentar um dos codigos pra que o outro funcione
//colocar os arquivos dos parametros dentro desta pasta
#include <stdio.h>

#define TAM_MAX 101

int main(void){
    char x[TAM_MAX];

    FILE *file = fopen("entrada2.txt", "r");
    if(file == NULL){
        puts("O arquivo nao pode ser aberto.");
        return 1;
    }
    puts("arquivo aberto com sucesso.");

    fgets(x, TAM_MAX, file);
    printf("%s\n", x);

    freopen("entradaTeste.txt", "r", file);

    while(fgets(x, TAM_MAX, file) != NULL){ 
        printf("%s", x);
    }

    return 0;
}