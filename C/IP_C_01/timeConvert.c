#include <stdio.h>

int main(){
    int segundos;

    scanf("%d", &segundos);

    printf("%d dias, %d horas, %d minutos e %d segundos.\n",
    segundos/(60*60*24), 
    segundos%(60*60*24)/(60*60),
    ((segundos%(60*60*24))%(60*60))/60, 
    ((segundos%(60*60*24))%(60*60))%60);

    return 0;
}