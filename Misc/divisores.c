#include <stdio.h>

int main()
{
    int n, qtd = 0;
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        if ((n % i) == 0)
        {
            qtd++;
        }
    }
    printf("\n%i\n\n", qtd);

    return 0;
}