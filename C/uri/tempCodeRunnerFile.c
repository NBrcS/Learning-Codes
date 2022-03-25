#include <stdio.h>
#include <string.h>

int resultado(char Jogador1[], char Jogador2[]){ 

    if(strcmp(Jogador1, Jogador2) == 0) return 3;
    else if(strcmp(Jogador1, "tesoura")   == 0 && strcmp(Jogador2, "papel"  )   == 0) return 1;
    else if(strcmp(Jogador1, "papel"  )   == 0 && strcmp(Jogador2, "pedra"  )   == 0) return 1;
    else if(strcmp(Jogador1, "pedra"  )   == 0 && strcmp(Jogador2, "lagarto")   == 0) return 1;
    else if(strcmp(Jogador1, "lagarto")   == 0 && strcmp(Jogador2, "spock"  )   == 0) return 1;
    else if(strcmp(Jogador1, "spock"  )   == 0 && strcmp(Jogador2, "tesoura")   == 0) return 1;
    else if(strcmp(Jogador1, "tesoura")   == 0 && strcmp(Jogador2, "lagarto")   == 0) return 1;
    else if(strcmp(Jogador1, "lagarto")   == 0 && strcmp(Jogador2, "papel"  )   == 0) return 1;
    else if(strcmp(Jogador1, "papel"  )   == 0 && strcmp(Jogador2, "spock"  )   == 0) return 1;
    else if(strcmp(Jogador1, "spock"  )   == 0 && strcmp(Jogador2, "pedra"  )   == 0) return 1;
    else if(strcmp(Jogador1, "pedra"  )   == 0 && strcmp(Jogador2, "tesoura")   == 0) return 1;
    else return 2;

}

int main(void){
    unsigned short T, i, count = 0;
    char Sheldon[10];
    char Raj[10];

    scanf("%hd", &T);
    while(T--){
        scanf("%s", Sheldon);
        scanf("%s", Raj);

        for(i = 0; i < 10; i++){
            if(Sheldon[i] == '0') Sheldon[i] = '\0';
            if(Raj[i] == '0') Raj[i] = '\0';
        }

        count++;
        if     (resultado(Sheldon, Raj) == 1) printf("Caso #%d: Bazinga!\n", count);
        else if(resultado(Sheldon, Raj) == 2) printf("Caso #%d: Raj trapaceou!\n", count);
        else                                  printf("Caso #%d: De novo!\n", count);
    }
   
    return 0;
}