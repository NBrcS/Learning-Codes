#include <stdio.h>
#include <string.h>

#define TAM_MAX 101

typedef struct{
    char marca[TAM_MAX];
    char modelo [TAM_MAX];
    int ano;
    int preco;
}veiculo;

void remove_endline(char string[TAM_MAX]){
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
}

int main(void){
    veiculo v1, v2;
    char clear_buffer;

    fgets(v1.modelo, TAM_MAX, stdin);
    remove_endline(v1.modelo);
    fgets(v1.marca, TAM_MAX, stdin);
    remove_endline(v1.marca);
    scanf("%d", &v1.ano);
    scanf("%d", &v1.preco);

    scanf("%c\n", &clear_buffer);

    fgets(v2.modelo, TAM_MAX, stdin);
    remove_endline(v2.modelo);
    fgets(v2.marca, TAM_MAX, stdin);
    remove_endline(v2.marca);
    scanf("%d", &v2.ano);
    scanf("%d", &v2.preco);

    if(v1.ano < v2.ano){
        printf("%s %s\n", v1.marca, v1.modelo);
    }
    else if(v1.ano > v2.ano){
        printf("%s %s\n", v2.marca, v2.modelo);
    }
    else{
        if(v1.preco < v2.preco){ 
            printf("%s %s\n", v1.marca, v1.modelo);
        }
        else{
            printf("%s %s\n", v2.marca, v2.modelo);
        }
    }
    
    return 0;
}