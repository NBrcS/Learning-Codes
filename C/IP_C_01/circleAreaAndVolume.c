#include <stdio.h>

#define PI 3.14159265

int main(){
    double R;

    scanf("%lf", &R);
    printf("%.2lf %.2lf", (PI * (R * R)), ((4/3.0) * PI * (R*R*R)));

    return 0;
}