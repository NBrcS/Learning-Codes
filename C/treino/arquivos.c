#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX 50

int main(void){
    FILE *file;   
    file = fopen("entradaTeste.txt", "a");
    
    if(file == NULL){
        printf("Nao foi possivel abrir o arquivo.\n");
        return 1;
    }
    fprintf(file, "Teste com string"); //aqui eu escrevo uma mensagem no arquivo file

    /*
    //*
    //* Aqui, o fopen deve ser mudado para o modo de leitura, e os valores perfeitamente formatados
    //* no arquivo serao atribuidos as variaveis x, y e z
    //* 
    
    int x, y, z;
    
    fscanf(file, "%d %d %d", &x, &y, &z);
    printf("%d %d %d", x, y, z);
    */

    /*
    //*
    //* Aqui o  fopen deve ser mudado para o modo de adicao, este programa ira escrever frases
    //* dentro do arquivo, uma abaixo da outra
    //* 
    //* (nota) deve ser criado uma melhor forma de limitacao do laco de repeticao, para que o usuario 
    //* digite um valor especificado e este encerre em um break;
    //* 
    
    char s[TAM_MAX];
    int t = 5;
    while(t--){
        fgets(s, TAM_MAX, stdin);
        fprintf(file, s);
    }
    
    */

    fclose(file);

    return 0;
}