#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char arq[31];
    int i, r;
/*
    printf("Nome do arquivo: ");
    scanf("%s", arq);
*/
    strcpy(arq, "dados.bin");

    fp = fopen(arq, "wb");
    if(fp = NULL){
        puts("Nao foi possivel criar o arquivo");
        return 1;
    }
    puts("O arquivo foi criado com sucesso.");
    
    //ESCRITA

    for(i = 0; i < 10; i++){
        r = fwrite(&i, sizeof(i), 1, fp);
        printf("fwrite escreveu: %d\n", r);
    }

    //LEITURA

    while(1){
        r = fread(&i, sizeof(i), 1, fp);
        if(feof(fp)) break;

        printf("Fread leu: r = %d, i = %d\n", r, i);
    }


    fclose(fp);

    return 0;
}