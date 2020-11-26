#include <stdio.h>
#define false 0
#define true 1

int main()
{
    int n = 29, soma = 0;

    while (soma != n)
    {
        for (int i = 1; i < n; i++)
        {
            if ((n % i) == 0)
            {
                soma = soma + i;
                printf("\n%i %i %i", soma, i, n);
            }
        }
        if (soma != n)
        {
            n++;
            soma = 0;
        }
    }
    printf("\n\n%i\n\n", n);
}