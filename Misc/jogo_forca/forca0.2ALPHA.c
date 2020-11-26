#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#define true 1
#define false 0

int main()
{
    char palavra[50], tema[50], palavra_rev[50], tentativa_acerto_palavra[50], letra, voltar;
    int menu, jogo, tam_palavra, partida, letra_certa, letra_usada;

    jogo = 2;
    while ((jogo != true) && (jogo != false))
    {
        system("clear");
        printf("\tBem vindo ao jogo da forca!\n\n");
        printf("\t(1) JOGAR\n");
        printf("\t(2) SAIR DO JOGO\n\t ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            jogo = true;
            break;
        case 2:
            jogo = false;
        default:
            break;
        }
    }

    while (jogo == true)
    {
        char letras_erradas[12 + 1] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0'}; //O USUÁRIO SÓ PODE ERRAR 6 VEZES, LOGO, APENAS 6 ESPAÇOS PARA LETRAS ERRADAS E MAIS 6 ESPAÇOS VAZIOS

        //VAR QUE RESETAM POR PARTIDA
        int erros = 0, i_lerradas = 0, vitoria = 0, palavra_certa = true;

        system("clear");

        setbuf(stdin, NULL); //LIMPA BUFFER DO TECLADO
        printf("\tInforme a palavra ou frase desejada:\n\t");
        scanf("%50[^\n]s", palavra);

        setbuf(stdin, NULL); //LIMPA BUFFER DO TECLADO
        printf("\n\tInforme o tema da palavra ou frase:\n\t");
        scanf("%50[^\n]s", tema);
        tam_palavra = strlen(palavra);
        palavra[tam_palavra] = '\0';
        for (int i = 0; palavra[i] != '\0'; i++)
        {
            if (palavra[i] != ' ')
            {
                palavra_rev[i] = '-';
            }
            else
            {
                palavra_rev[i] = ' ';
                vitoria++;
            }
        }
        palavra_rev[tam_palavra] = '\0';

        partida = true;

        while (partida == true)
        {
            system("clear");
            printf("\tLetras erradas: %s\n\n", letras_erradas);
            printf("\tTema: %s\n\n", tema);

            //SWITCH DE SPRITES BASEADO NA QUANTIDADE DE ERROS (LETRAS ERRADAS)
            switch (erros)
            {
            case 0:
                printf("\t ------------------\n");
                printf("\t/|\\               |\n");
                printf("\t |                | \n");
                printf("\t |               \n");
                printf("\t |               \n");
                printf("\t |               \n");
                printf("\t |               \n");
                printf("\t |                                   %s  \n", palavra_rev);
                printf("\t |               \n");
                printf("\t |               \n");
                printf("\t |               \n");
                printf("\t |               \n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t/ \\ \n\n\n");
                break;
            case 1:
                printf("\t ------------------\n");
                printf("\t/|\\               |\n");
                printf("\t |                | \n");
                printf("\t |               OO\n");
                printf("\t |              O  O\n");
                printf("\t |               OO\n");
                printf("\t |               \n");
                printf("\t |                                   %s  \n", palavra_rev);
                printf("\t |               \n");
                printf("\t |               \n");
                printf("\t |               \n");
                printf("\t |               \n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t/ \\ \n\n\n");
                break;
            case 2:
                printf("\t ------------------\n");
                printf("\t/|\\               |\n");
                printf("\t |                | \n");
                printf("\t |               OO\n");
                printf("\t |              O  O\n");
                printf("\t |               OO\n");
                printf("\t |                |\n");
                printf("\t |                |                  %s  \n", palavra_rev);
                printf("\t |                |\n");
                printf("\t |                |\n");
                printf("\t |                \n");
                printf("\t |                \n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t/ \\ \n\n\n");
                break;
            case 3:
                printf("\t ------------------\n");
                printf("\t/|\\               |\n");
                printf("\t |                | \n");
                printf("\t |               OO\n");
                printf("\t |              O  O\n");
                printf("\t |               OO\n");
                printf("\t |                |\n");
                printf("\t |               /|                  %s  \n", palavra_rev);
                printf("\t |              / |\n");
                printf("\t |                |\n");
                printf("\t |                \n");
                printf("\t |                \n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t/ \\ \n\n\n");
                break;
            case 4:
                printf("\t ------------------\n");
                printf("\t/|\\               |\n");
                printf("\t |                | \n");
                printf("\t |               OO\n");
                printf("\t |              O  O\n");
                printf("\t |               OO\n");
                printf("\t |                |\n");
                printf("\t |               /|\\                 %s  \n", palavra_rev);
                printf("\t |              / | \\ \n");
                printf("\t |                |\n");
                printf("\t |                \n");
                printf("\t |                \n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t/ \\ \n\n\n");
                break;
            case 5:
                printf("\t ------------------\n");
                printf("\t/|\\               |\n");
                printf("\t |                | \n");
                printf("\t |               OO\n");
                printf("\t |              O  O\n");
                printf("\t |               OO\n");
                printf("\t |                |\n");
                printf("\t |               /|\\                 %s  \n", palavra_rev);
                printf("\t |              / | \\ \n");
                printf("\t |                |\n");
                printf("\t |               /\n");
                printf("\t |              / \n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t/ \\ \n\n\n");
                break;
            default:
                break;
            }

            //ACERTAR PALAVRA/FRASE OU ESCOLHER LETRA
            setbuf(stdin, NULL); //LIMPA O BUFFER DO TECLADO
            printf("\t(1) Acertar a palavra/frase (se errar é fim de jogo)\n");
            printf("\t(2) Escolher uma letra\n\t");
            scanf("%d", &menu);

            switch (menu)
            {
            //RAMO ACERTAR PALAVRA/FRASE
            case 1:

                setbuf(stdin, NULL); //LIMPA O BUFFER DO TECLADO
                printf("\n\tInforme a palavra/frase:\n\t");
                scanf("%50[^\n]s", tentativa_acerto_palavra);
                palavra_certa = true;
                for (int i = 0; tentativa_acerto_palavra[i] != '\0'; i++)
                {
                    if (tolower(tentativa_acerto_palavra[i]) != tolower(palavra[i]))
                    {
                        palavra_certa = false;
                        erros = 6;
                    }
                }
                if (palavra_certa == true)
                {
                    vitoria = tam_palavra;
                }
                break;

            //RAMO ESCOLHER LETRA
            case 2:
                //ESCOLHA UMA LETRA
                setbuf(stdin, NULL); //LIMPA O BUFFER DO TECLADO
                printf("\n\tEscolha uma letra: \n\t");
                letra = getchar();

                //CONFERE SE A LETRA FOI USADA
                letra_usada = false;
                for (int i = 0; i < tam_palavra; i++)
                {
                    if (tolower(letra) == tolower(palavra_rev[i]))
                    {
                        letra_usada = true;
                    }
                }
                for (int i = 0; i < 12; i++)
                {
                    if (tolower(letra) == tolower(letras_erradas[i]))
                    {
                        letra_usada = true;
                    }
                }
                //RAMO SE A LETRA JÁ TIVER SIDO USADA
                if (letra_usada == true)
                {
                    printf("Letra ja usada...");
                }
                //RAMO SE A LETRA NÃO FOI USADA
                else
                {
                    letra_certa = false;
                    for (int i = 0; palavra[i] != '\0'; i++)
                    {
                        if (tolower(letra) == tolower(palavra[i]))
                        {
                            palavra_rev[i] = palavra[i];
                            letra_certa = true;
                            vitoria++;
                        }
                    }
                    if (letra_certa == false)
                    {
                        letras_erradas[i_lerradas] = letra;
                        letras_erradas[i_lerradas + 1] = ' ';
                        i_lerradas += 2;
                        erros++;
                    }
                }
            default:
                break;
            }

            //CONDIÇÃO DE VITÓRIA
            if (vitoria == tam_palavra)
            {
                system("clear");
                printf("\tLetras erradas: %s\n\n", letras_erradas);
                printf("\tTema: %s\n\n", tema);
                printf("\t ------------------          PARABÉNS VOCÊ ADVINHOU A PALAVRA OU FRASE\n");
                printf("\t/|\\                \n");
                printf("\t |                  \n");
                printf("\t |               OO\n");
                printf("\t |              O**O\n");
                printf("\t |               OO\n");
                printf("\t |              \\ | /\n");
                printf("\t |               \\|/                 %s\n", palavra);
                printf("\t |                | \n");
                printf("\t |                |\n");
                printf("\t |               / \\\n");
                printf("\t |              /   \\\n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t/ \\ \n\n\n");
                printf("Aperte qualque tecla para voltar: ");
                scanf("%c", &voltar);
                getchar();
                partida = false;
            }
            //CONDIÇÃO DE DERROTA
            else if (erros == 6)
            {
                system("clear");
                printf("\tLetras erradas: %s\n\n", letras_erradas);
                printf("\tTema: %s\n\n", tema);
                printf("\t ------------------        QUE PENA, VOCÊ NÃO ADVINHOU A PALAVRA OU FRASE\n");
                printf("\t/|\\               |\n");
                printf("\t |                | \n");
                printf("\t |               OO\n");
                printf("\t |              OxxO\n");
                printf("\t |               OO\n");
                printf("\t |                |  \n");
                printf("\t |               /|\\                %s\n", palavra);
                printf("\t |              / | \\\n");
                printf("\t |                |\n");
                printf("\t |               / \\\n");
                printf("\t |              /   \\\n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t |\n");
                printf("\t/ \\ \n\n\n");
                printf("Aperte qualque tecla para voltar: ");
                scanf("%c", &voltar);
                getchar();
                partida = false;
            }
        }
        jogo = 2;
        while ((jogo != true) && (jogo != false))
        {
            system("clear");
            printf("\tBem vindo ao jogo da forca!\n\n");
            printf("\t(1) JOGAR\n");
            printf("\t(2) SAIR DO JOGO\n\t ");
            scanf("%d", &menu);

            switch (menu)
            {
            case 1:
                jogo = true;
                break;
            case 2:
                jogo = false;
            default:
                break;
            }
        }
    }
}