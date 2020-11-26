#include <stdio.h>
int main()
{
    float s0, s1, t0, t1, vm;
    printf("\nInforme a posicao inicial e final em metros: ");
    scanf("%f %f", &s0, &s1);
    printf("\nInforme o tempo inicial e final em segundos: ");
    scanf("%f %f", &t0, &t1);

    vm = (s1 - s0) / (t1 - t0);

    printf("\nVelocidade media = %.3fm/s\n", vm);
    return 0;
}