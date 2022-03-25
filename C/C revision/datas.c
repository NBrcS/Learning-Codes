#include <stdio.h>

typedef struct{
    int ano;
    int mes;
    int dia;
}Data;

int mais_velha(Data d1, Data d2){
    if(d1.ano == d2.ano){
        if(d1.mes == d2.mes){
            if(d1.dia == d2.dia){
                return 0;
            }
            else if(d1.dia < d2.dia){
                return 1;
            }
            else{
                return -1;
            }
        }
        else if(d1.mes < d2.mes){
            return 1;
        }
        else{
            return -1;
        }
    }
    else if(d1.ano < d2.ano){
        return 1;
    }
    else{
        return -1;
    }
}

int main(void){
    Data datas[2];

    for(int i = 0; i < 2; i++){ 
        scanf("%d%d%d", &datas[i].dia, &datas[i].mes, &datas[i].ano);
    }

    if(mais_velha(datas[0], datas[1]) == 1){
        printf("Pessoa 1 é mais velha\n");
    }
    else if(mais_velha(datas[0], datas[1]) == -1){
        printf("Pessoa 2 é mais velha\n");
    }
    else{
        printf("Pessoas são da mesma idade\n");
    }

    return 0;
}