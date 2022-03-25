#include <stdio.h>

#define TAM_MAX 101

int main(void){
    char Sentence[TAM_MAX] = "init\n";

    FILE *fileR;
    fileR = fopen("Archive.txt", "r");
    if(fileR == NULL){
        printf("An error has occurred on opening the read file.\n");

        printf("Press enter to end the program.\n");
        getchar();
        return 1;
    }

    FILE *fileW;
    fileW = fopen("Copied.txt", "w");
    if(fileW == NULL){
        printf("An error has occurred on opening the copy file.\n");

        printf("Press enter to end the program.\n");
        getchar();
        return 1;
    }

    do{
        fprintf(fileW, Sentence);
    }while(fgets(Sentence, TAM_MAX, fileR) != NULL);


    printf("Press enter to end the program.\n");
    getchar();
    return 0;
}