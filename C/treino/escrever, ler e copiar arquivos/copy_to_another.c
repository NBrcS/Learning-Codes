#include <stdio.h>
#include <string.h>

#define TAM_MAX 1001

void Trim(char *str){

    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    
    }
}

int main(void){
    char read_arc[TAM_MAX];
    char write_arc[TAM_MAX];
    char reader[TAM_MAX];
    char end;

    printf("Digite o nome do arquivo que sera lido (com sua extensao): ");
    fgets(read_arc, TAM_MAX, stdin);
    Trim(read_arc);
    FILE *fileR;
    fileR = fopen(read_arc, "r");
    if(fileR == NULL){
        puts("O arquivo para leitura nao pode ser aberto.");
        return 1;
    }
    else{
        puts("O arquivo de leitura foi aberto com sucesso");
    }
    printf("\n");

    printf("Digite o nome do arquivo que sera escrito ou sobreposto (com sua extensao): ");
    fgets(write_arc, TAM_MAX, stdin);
    Trim(write_arc);
    FILE *fileW;
    fileW = fopen(write_arc, "w");
    if(fileW == NULL){
        puts("O arquivo para escrita nao pode ser aberto.");
        return 2;
    }
    else{
        puts("O arquivo de escrita foi aberto com sucesso");
    }
    printf("\n");

    while(fgets(reader, TAM_MAX, fileR) != NULL){
        fprintf(fileW, reader);
    }
    printf("O arquivo foi copiado com sucesso.\n");
    fclose(fileR);
    fclose(fileW);
    printf("Programa encerrado e arquivos fechados.\n");

    scanf("%c", &end);

    return 0;
}