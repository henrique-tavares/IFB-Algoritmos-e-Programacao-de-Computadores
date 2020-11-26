#include <stdio.h>
int main()
{
    double n, n0;
    int n1;
    printf("\nInforme um numero real: ");
    scanf("%lf", &n);
    n0 = n - (int)n;
    n1 = (int)n;
    printf("\nO numero: %lf\n\
e formado pela parte inteira: %i\n\
e pela parte decimal: %lf\n",
           n, n1, n0);
    return 0;
}