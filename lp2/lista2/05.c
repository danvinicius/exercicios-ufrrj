#include <stdio.h>

int main()
{
    system("clear || cls");
    int num, total, maior, menor;
    float somaImpares, pares, impares;
    total = pares = impares = somaImpares = 0;

    while (1)
    {
        printf("Digite um número (negativo para parar): \n");
        scanf("%d", &num);

        // verificando se é negativo
        if (num < 0)
            break;
        // verificando maior e o menor
        if (total == 0)
        {
            maior = menor = num;
        }
        else
        {
            if (num > maior)
            {
                maior = num;
            }
            if (num < menor)
            {
                menor = num;
            }
        }
        // verificando par ou ímpar
        if (num % 2 == 0)
            pares++;
        if (num % 2 != 0)
        {
            somaImpares += num;
            impares++;
        }

        total++;
    }

    float percentPares = (float)(pares * 100 / total);
    float mediaImpares = (float)(somaImpares / impares);

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Foram lidos %d números válidos\n", total);
    printf("O percentual de números pares foi de %.2f%% \n", percentPares);
    printf("A média de números ímpares foi %.1f\n", mediaImpares);
    printf("O maior número lido foi %d e o menor foi %d", maior, menor);

    return 0;
}