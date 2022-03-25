#include <stdio.h>
#include <Windows.h>

int main(){   
    FILE *fp;

    fp = fopen("https://www.google.com.br", "w");
    fprintf(fp, "https://www.youtube.com/watch?v=adJlfVz426w");

    fclose(fp);
    return 0;
}