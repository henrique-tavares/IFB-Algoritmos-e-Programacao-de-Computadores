#include <stdio.h>
int main()
{
    char c1, c2;
    printf("\nInforme as duas letras a serem traduzidas para ascii: ");
    scanf("%c %c", &c1, &c2);
    getchar();
    printf("\nAscii de %c = %d\nAscii de %c = %d\n", c1, c1, c2, c2);
    return 0;
}