#include <stdio.h>
#include <string.h>
#define tamanho 200

int main()
{
    char frase[tamanho];
    int tam_frase;

    scanf("%200[^\n]s", frase);
    tam_frase = strlen(frase);

    printf("\n");
    for (int i = (tam_frase - 1); i >= 0; i--)
    {
        printf("%c", frase[i]);
    }

    printf("\n\n");
    return 0;
}