#include <stdio.h>
#include <math.h>
#define tamanho 10

int main(void)
{
    float vetor[tamanho], media = 0, variancia = 0, desvio;
    printf("\nInforme os números do vetor:\n");

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%f", &vetor[i]);
        media = media + vetor[i];
    }

    media = media / tamanho;

    for (int i = 0; i < tamanho; i++)
    {
        variancia = variancia + pow((vetor[i] - media), 2);
    }

    variancia = variancia / tamanho;
    desvio = sqrt(variancia);

    //printf("\nVariância = %.3f\n", variancia);
    printf("\nDesvio padrão = %.3f\n\n", desvio);
    return 0;
}