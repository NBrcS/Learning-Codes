#include <stdio.h>
#include <string.h>

#define TAM_MAX 101

typedef struct{
    char nome_completo[TAM_MAX];
    int idade;
    int chutes_a_gol;
    int gols;
}jogador;

void remove_endline(char string[TAM_MAX]){
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
}

int main(void){
    jogador j1, j2;
    char clear_buffer;

    fgets(j1.nome_completo, TAM_MAX, stdin);
    remove_endline(j1.nome_completo);
    scanf("%d", &j1.idade);
    scanf("%d", &j1.chutes_a_gol);
    scanf("%d", &j1.gols);

    scanf("%c\n", &clear_buffer);

    fgets(j2.nome_completo, TAM_MAX, stdin);
    remove_endline(j2.nome_completo);
    scanf("%d", &j2.idade);
    scanf("%d", &j2.chutes_a_gol);
    scanf("%d", &j2.gols);

    if(j1.gols > j2.gols){
        printf("%s (%i)\n", j1.nome_completo, j1.idade);
    }
    else{
        printf("%s (%i)\n", j2.nome_completo, j2.idade);
    }
    
    return 0;
}