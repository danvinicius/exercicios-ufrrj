/*
Entre com a idade de várias pessoas (finalize a leitura com um número
negativo) e imprima a quantidade de pessoas que tinham mais de 21 anos e a
média de idade das pessoas com mais de 60.
*/

#include <stdio.h>

int main()
{
    system("clear || cls");
    int idade, maisDe21, maisDe60, somaIdadeMais60;
    maisDe21 = maisDe60 = 0;
    while (1)
    {
        printf("Digite uma idade (negativo para parar): \n");
        scanf("%d", &idade);
        if (idade < 0)
            break;
        if (idade > 21)
            maisDe21++;
        if (idade > 60)
        {
            maisDe60++;
            somaIdadeMais60 += idade;
        }
    }
    if (maisDe21 == 0)
    {
        printf("Nenhuma pessoa tem mais de 21 anos");
    }
    else
    {
        printf("%d pessoas tem mais de 21 anos\n", maisDe21);
    }

    if (maisDe60 == 0)
    {
        printf("Nenhuma pessoa tem mais de 60 anos");
    }
    else
    {
        float mediaMais60 = somaIdadeMais60 / maisDe60;
        printf("A média de idade das pessoas com mais de 60 anos é %.2f", mediaMais60);
    }

    return 0;
}