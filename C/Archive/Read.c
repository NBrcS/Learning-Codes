#include <stdio.h>

#define TAM_MAX 101

int main(void){
    char Sentence[TAM_MAX];


    FILE *fileR;
    fileR = fopen("Archive.txt", "r");
    if(fileR == NULL){
        printf("The read archive not open. ");

        printf("Press enter to end the program. ");
        getchar();
        return 1;
    }

    while(fgets(Sentence, TAM_MAX, fileR) != NULL){ 
        printf("%s", Sentence);       
    }
    
    fclose(fileR);
    
    printf("\nPress enter to end the program. ");
    getchar();

    return 0;
}