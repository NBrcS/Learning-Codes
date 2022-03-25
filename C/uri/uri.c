#include <stdio.h>
//função do tipo char para retornar a letra vencedora ou se foi velha com o z
//a funcao foi criada apontando para a matriz do tabuleiro
char Vencedor(char campo[3][3]){
    //aqui tem todos os casos onde o X pode vencer
    if(campo[0][0]=='X'&& campo[0][1]=='X' && campo[0][2]=='X') return 'X'; 
    else if(campo[1][0]=='X'&& campo[1][1]=='X' && campo[1][2]=='X') return 'X'; 
    else if(campo[2][0]=='X'&& campo[2][1]=='X' && campo[2][2]=='X') return 'X'; 
    else if(campo[0][0]=='X'&& campo[1][1]=='X' && campo[2][2]=='X') return 'X'; 
    else if(campo[0][2]=='X'&& campo[1][1]=='X' && campo[2][0]=='X') return 'X'; 
    else if(campo[0][0]=='X'&& campo[1][0]=='X' && campo[2][0]=='X') return 'X'; 
    else if(campo[0][1]=='X'&& campo[1][1]=='X' && campo[2][1]=='X') return 'X'; 
    else if(campo[0][2]=='X'&& campo[1][2]=='X' && campo[2][2]=='X') return 'X'; 

    //aqui tem todos os casos onde o O pode vencer
    if(campo[0][0]=='O'&& campo[0][1]=='O' && campo[0][2]=='O') return 'O'; 
    else if(campo[1][0]=='O'&& campo[1][1]=='O' && campo[1][2]=='O') return 'O'; 
    else if(campo[2][0]=='O'&& campo[2][1]=='O' && campo[2][2]=='O') return 'O'; 
    else if(campo[0][0]=='O'&& campo[1][1]=='O' && campo[2][2]=='O') return 'O'; 
    else if(campo[0][2]=='O'&& campo[1][1]=='O' && campo[2][0]=='O') return 'O'; 
    else if(campo[0][0]=='O'&& campo[1][0]=='O' && campo[2][0]=='O') return 'O'; 
    else if(campo[0][1]=='O'&& campo[1][1]=='O' && campo[2][1]=='O') return 'O'; 
    else if(campo[0][2]=='O'&& campo[1][2]=='O' && campo[2][2]=='O') return 'O'; 

    //eu retorno o valor V caso de velha
    else return 'V';

}
 
int main(void) {

//declaração das variaveis
//o array é do tipo char pois armazenara X e O
//vencedor tambem vai ser um char pois vai armazenar quem venceu
//i e j sao int pois serao os contadores do for
    char campo[3][3];
    char vencedor;
    int i, j;

//é escaneado o campo por meio do for aninhado onde o i representa a linha e o j a coluna
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            //foi colocado um espaço antes do %c para o enter nao ser contabilizado o enter
            scanf(" %c", &campo[i][j]);
        }
    }
    
    //aqui é chamada a funçao Vencedor e é enviado o campo para assim verificar
    vencedor=Vencedor(campo);

//eu defini o velha como V pois precisava ser so um caractere para retornar
//aqui ele verifica se foi velha ou um dos lados venceu e printa o vencedor
    if(vencedor=='V')puts("Velha");
    else printf("%c\n", vencedor);
 
    return 0;
}