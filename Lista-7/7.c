#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int tam_str, tam_str2, i = 1, j = 0;

    scanf("%[^\n]s", str);
    getchar();

    printf("\n");
    while (str[j] != '\0')
    {
        printf("%c", str[j]);
        if (((j + 1) % 60) == 0)
        {
            printf("\n");
        }
        j++;
    }
    printf("\n\n");
    return 0;
}