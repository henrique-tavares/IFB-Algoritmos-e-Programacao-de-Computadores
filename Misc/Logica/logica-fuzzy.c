#include <stdio.h>

int main(void)
{
    float temp;
    float frio, quente, normal;

    printf("\nInforme a temperatura do ambiente em graus celsius: ");
    scanf("%f", &temp);

    if (temp <= 10)
    {
        frio = 1;
        normal = 0;
        quente = 0;
        //aparelho na função aquecer com 100% de potência
    }
    else if ((10 < temp) && (temp <= 11))
    {
        frio = 0.9;
        normal = 0.1;
        quente = 0;
        //aparelho na função aquecer com 90% de potência
    }
    else if ((11 < temp) && (temp <= 12))
    {
        frio = 0.8;
        normal = 0.2;
        quente = 0;
        //aparelho na função aquecer com 80% de potência
    }
    else if ((12 < temp) && (temp <= 13))
    {
        frio = 0.7;
        normal = 0.3;
        quente = 0;
        //aparelho na função aquecer com 70% de potência
    }
    else if ((13 < temp) && (temp <= 14))
    {
        frio = 0.6;
        normal = 0.4;
        quente = 0;
        //aparelho na função aquecer com 60% de potência
    }
    else if ((14 < temp) && (temp <= 15))
    {
        frio = 0.5;
        normal = 0.5;
        quente = 0;
        //aparelho na função aquecer com 50% de potência
    }
    else if ((15 < temp) && (temp <= 16))
    {
        frio = 0.5;
        normal = 0.5;
        quente = 0;
        //aparelho na função aquecer com 50% de potência
    }
    else if ((16 < temp) && (temp <= 17))
    {
        frio = 0.4;
        normal = 0.6;
        quente = 0;
        //aparelho na função aquecer com 40% de potência
    }
    else if ((17 < temp) && (temp <= 18))
    {
        frio = 0.3;
        normal = 0.7;
        quente = 0;
        //aparelho na função aquecer com 30% de potência
    }
    else if ((18 < temp) && (temp <= 19))
    {
        frio = 0.2;
        normal = 0.8;
        quente = 0;
        //aparelho na função aquecer com 20% de potência
    }
    else if ((19 < temp) && (temp <= 20))
    {
        frio = 0.1;
        normal = 0.9;
        quente = 0;
        //aparelho na função aquecer com 10% de potência
    }
    else if ((20 < temp) && (temp <= 25))
    {
        frio = 0;
        normal = 1;
        quente = 0;
        //aparelho desligado
    }
    else if ((25 < temp) && (temp <= 26))
    {
        frio = 0;
        normal = 0.9;
        quente = 0.1;
        //aparelho na função resfriar com 10% de potência
    }
    else if ((26 < temp) && (temp <= 27))
    {
        frio = 0;
        normal = 0.8;
        quente = 0.2;
        //aparelho na função resfriar com 20% de potência
    }
    else if ((27 < temp) && (temp <= 28))
    {
        frio = 0;
        normal = 0.7;
        quente = 0.3;
        //aparelho na função resfriar com 30% de potência
    }
    else if ((28 < temp) && (temp <= 29))
    {
        frio = 0;
        normal = 0.6;
        quente = 0.4;
        //aparelho na função resfriar com 40% de potência
    }
    else if ((29 < temp) && (temp <= 30))
    {
        frio = 0;
        normal = 0.5;
        quente = 0.5;
        //aparelho na função resfriar com 50% de potência
    }
    else if ((30 < temp) && (temp <= 31))
    {
        frio = 0;
        normal = 0.5;
        quente = 0.5;
        //aparelho na função resfriar com 50% de potência
    }
    else if ((31 < temp) && (temp <= 32))
    {
        frio = 0;
        normal = 0.4;
        quente = 0.6;
        //aparelho na função resfriar com 60% de potência
    }
    else if ((32 < temp) && (temp <= 33))
    {
        frio = 0;
        normal = 0.3;
        quente = 0.7;
        //aparelho na função resfriar com 70% de potência
    }
    else if ((33 < temp) && (temp <= 34))
    {
        frio = 0;
        normal = 0.2;
        quente = 0.8;
        //aparelho na função resfriar com 80% de potência
    }
    else if ((34 < temp) && (temp <= 35))
    {
        frio = 0;
        normal = 0.1;
        quente = 0.9;
        //aparelho na função resfriar com 90% de potência
    }
    else if (temp > 35)
    {
        frio = 0;
        normal = 0;
        quente = 1;
        //aparelho na função resfriar com 100% de potência
    }

    if ((frio > quente) && (normal != 1))
    {
        printf("\nO aparelho está aquecendo com %.0f%% de potência\n\n", frio * 100);
    }
    else if ((quente > frio) && (normal != 1))
    {
        printf("\nO aparelho está resfriando com %.0f%% de potência\n\n", quente * 100);
    }
    else if (normal == 1)
    {
        printf("\nO aparelho está desligado\n\n");
    }

    return 0;
}