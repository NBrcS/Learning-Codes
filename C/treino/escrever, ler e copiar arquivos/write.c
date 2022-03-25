#include <stdio.h>
#include <string.h>

#define TAM_MAX 1001

void Trim(char *str){

    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    
    }
}

int main(void){
    char nome_arquivo[TAM_MAX];
    char frasesC[TAM_MAX];
    int linhas, i;
    char end;

    printf("Digite o nome do arquivo que sera criado: ");
    fgets(nome_arquivo, TAM_MAX, stdin);
    Trim(nome_arquivo);

    FILE *file;
    file = fopen(nome_arquivo, "w");
    if(file == NULL){
        printf("O arquivo nao pode ser criado, aberto ou escrito.\n");
        return 1;
    }
    else{
        printf("O arquivo foi criado/sobreposto com exito.\n\n");
    }

    printf("Digite o numero de linhas que deseja escrever neste arquivo: ");
    scanf("%d%*c", &linhas);

    for(i = 1; i <= linhas; i++){
        printf("\nDigite a frase da linha %d, por favor: ", i);
        fgets(frasesC, TAM_MAX, stdin);
        fprintf(file, frasesC);
        printf("Texto escrito com exito.\n");
    }

    fclose(file);
    printf("\nArquivo fechado e programa encerrado.\n");

    scanf("%c", end);

    return 0;
}