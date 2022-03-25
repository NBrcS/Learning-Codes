#include <stdio.h>

void Clear_Buffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(void){
    char x, y ,z;
    
    x = getchar();
    Clear_Buffer();
    y = getchar();
    Clear_Buffer();
    z = getchar();
    Clear_Buffer();
    
    printf("%c", x);
    printf("%c", y);
    printf("%c", z);

    return 0;
}