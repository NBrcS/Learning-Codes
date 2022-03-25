#include <stdio.h>

#define TAM_MAX 101

int main(void){
    char Data[TAM_MAX];
    int i;
    
    FILE *fileW;
    fileW = fopen("Archive.txt", "w");
    if(fileW == NULL){
        printf("The write file not open.\n");

        printf("Press enter to end the program.");
        getchar();

        return 1;
    }
    fprintf(fileW, "I`m writing this archive.\n");

    fclose(fileW);
    
    printf("\nPress enter to end the program. ");
    getchar();

    return 0;
}