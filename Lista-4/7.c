#include <stdio.h>
int main()
{
    printf("\nOs 9 numeros digitados a seguir serao organizados\nem uma matriz 3x3\n");
    double a11, a12, a13, a21, a22, a23, a31, a32, a33;
    printf("\nInforme os nove numeros reais:\n");
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf", &a11, &a12, &a13, &a21, &a22, &a23, &a31, &a32, &a33);
    printf("\n%5.2lf %5.2lf %5.2lf\n%5.2lf %5.2lf %5.2lf\n%5.2lf %5.2lf %5.2lf\n", a11, a12, a13, a21, a22, a23, a31, a32, a33);
    return 0;
}