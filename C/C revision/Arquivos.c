#include <stdio.h>
#include <string.h>

#define TAM_MAX 1001

typedef struct{
    char CPF[TAM_MAX];
    char Nome[TAM_MAX];
    char Sobrenome[TAM_MAX];
    char Endereco[TAM_MAX];
    char Telefone[TAM_MAX];
}Pessoa;

void remove_endline(char string[]){
    if(string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }
}

void Escrever_no_arquivo(char Dados[]){

    FILE *escrita;
    escrita = fopen("CSV.txt", "a");
    
    fprintf(escrita, Dados);

    fclose(escrita);
}

void Ler_e_imprimir_arquivo(){
    char texto[TAM_MAX];

    FILE *leitura;
    leitura = fopen("CSV.txt", "r");

    printf("CPF,nome,snome,endereço,telefone\n");

    int i = 0;
    while(fgets(texto, TAM_MAX, leitura) != NULL){
        remove_endline(texto);
        printf("%s", texto);
        if(i == 4){
            printf("\n");
            i = 0;
        }
        else{
            printf(",");   
            i++;   
        }
    }

    fclose(leitura);
}

int main(void){
    int N;

    scanf("%d%*c", &N);
    Pessoa Pessoas[N];

    for(int i = 0; i < N; i++){        
        fgets(Pessoas[i].CPF, TAM_MAX, stdin);
        Escrever_no_arquivo(Pessoas[i].CPF);

        fgets(Pessoas[i].Nome, TAM_MAX, stdin);
        Escrever_no_arquivo(Pessoas[i].Nome);

        fgets(Pessoas[i].Sobrenome, TAM_MAX, stdin);
        Escrever_no_arquivo(Pessoas[i].Sobrenome);

        fgets(Pessoas[i].Endereco, TAM_MAX, stdin); 
        Escrever_no_arquivo(Pessoas[i].Endereco);

        fgets(Pessoas[i].Telefone, TAM_MAX, stdin);
        Escrever_no_arquivo(Pessoas[i].Telefone);


    }    
    Ler_e_imprimir_arquivo();

    remove("CSV.txt");
    return 0;
}
