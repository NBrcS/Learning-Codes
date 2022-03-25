#include <stdio.h>
#include <math.h>

static double PI = 3.14159;

double TriangleArea(double Height, double Base){ return (Base * Height) / 2; }
double CircleArea(double Radius){ return PI * pow(Radius, 2); }
double TrapezeArea(double B1, double b2, double Height){ return ((B1 + b2) * Height) / 2; }
double SquareArea(double Side){ return pow(Side, 2); }
double RectangleArea(double Side1, double Side2){ return Side1 * Side2; }

int main(){ 
    double A, B, C;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    printf("TRIANGULO: %.3lf\n", TriangleArea(C, A));
    printf("CIRCULO: %.3lf\n", CircleArea(C));
    printf("TRAPEZIO: %.3lf\n", TrapezeArea(A, B ,C));
    printf("QUADRADO: %.3lf\n", SquareArea(B));
    printf("RETANGULO: %.3lf\n", RectangleArea(A, B));

    return 0;
}