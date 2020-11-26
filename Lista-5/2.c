#include <stdio.h>

int main()
{
    int nlinhas, ncolunas, par = 2;

    printf("\nInforme a quantidade de linhas da matriz: ");
    scanf("%i", &nlinhas);

    printf("\nInforme a quantidade de colunas da matriz: ");
    scanf("%i", &ncolunas);

    printf("\n");

    for (int i = 0; i < nlinhas; i++)
    {
        for (int j = 0; j < ncolunas; j++)
        {
            printf("%-4i", par);
            par = par + 2;
        }

        printf("\n");
    }

    printf("\n\n");
    return 0;
}