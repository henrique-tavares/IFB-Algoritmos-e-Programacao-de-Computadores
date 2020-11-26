#include <stdio.h>

int main()
{
    int n, triangular, fator = 0;

    printf("\nInforme um número 'n' para ver os 'n' primeiros números triangulares: ");
    scanf("%i", &n);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        triangular = (fator * (fator + 1) * (fator + 2));
        fator++;

        if (i == (n - 1))
        {
            printf("%i.", triangular);
        }

        else
        {
            printf("%i,", triangular);
        }
    }

    printf("\n\n");
    return 0;
}