#include <stdio.h>
#include <string.h>

int main()
{
    int tam_str;
    char str[200], str2[200];
    puts("\nInforme uma string qualquer:");
    scanf("%[^\n]s", str);
    tam_str = strlen(str);
    strcpy(str2, str);

    for (int i = 0; i < tam_str; i++)
    {
        str[i] = str2[(tam_str - 1) - i];
    }

    printf("\n%s\n\n", str);
    return 0;
}