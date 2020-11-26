#include <stdio.h>
int main()
{
    int n1, n2, soma;
    printf("\nInforme os dois numeros a serem somados: ");
    scanf("%i %i", &n1, &n2);
    soma = n1 + n2;
    printf("\nO resultado da soma de %i e %i e igual a %i\n", n1, n2, soma);
    return 0;
}