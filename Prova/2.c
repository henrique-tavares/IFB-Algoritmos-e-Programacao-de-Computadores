#include <stdio.h>
#define tamanho 10

int main()
{
    int vetor[tamanho], qtd_pares = 0;

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%i", &vetor[i]);

        if ((vetor[i] % 2) == 0)
        {
            qtd_pares++;
        }
    }

    printf("\n\n%i\n\n", qtd_pares);
    return 0;
}