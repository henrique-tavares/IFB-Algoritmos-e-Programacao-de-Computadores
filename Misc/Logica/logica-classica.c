#include <stdio.h>

int main(void)
{
    float temp, frio, normal, quente;

    printf("\nInforme a temperatura ambiente em graus celsius: ");
    scanf("%f", &temp);

    // caso a temperatura seja menor do que 20° celsius
    // o que seria considerado frio
    // então o aparelho irá aquecer o ambiente
    if (temp < 20)
    {
        frio = 1;
        normal = 0;
        quente = 0;
    }

    // caso a temperatura esteja entre 20° e 26° celsius
    // o que seria considerado agradável
    // então o aparelho irá desligar
    else if ((temp >= 20) && (temp <= 26))
    {
        frio = 0;
        normal = 1;
        quente = 0;
    }

    // caso a temperatura seja maior do que 26° celsius
    // o que seria considerado quente
    // então o aparelho irá resfriar o ambiente
    else
    {
        frio = 0;
        normal = 0;
        quente = 1;
    }

    if (frio == 1)
    {
        printf("\nO aparelho está aquecendo\n\n");
    }
    else if (normal == 1)
    {
        printf("\nO aparelho está desligado\n\n");
    }
    else if (quente == 1)
    {
        printf("\nO aparelho está resfriando\n\n");
    }
}