/*
Faça um programa em C que leia vários números até encontrar o número
999. A seguir, imprima a quantidade de números lidos, a média dos números,
o maior e o menor número encontrado.
*/

#include <stdio.h>

main()
{
    int numAtual, qtdNumerosLidos, tot, maior, menor;
    float media;
    tot = qtdNumerosLidos = 0;
    while (1)
    {

        if (qtdNumerosLidos == 0)
        {
            printf("Digite um numero: (999 para parar)\n");
            scanf("%d", &numAtual);
            if (numAtual == 999)
                break;
            maior = menor = numAtual;
        }

        else
        {
            printf("Digite outro numero: (999 para parar)\n");
            scanf("%d", &numAtual);
            if (numAtual == 999)
                break;
            if (numAtual > maior)
                maior = numAtual;
            if (numAtual < menor)
                menor = numAtual;
        }
        tot += numAtual;
        qtdNumerosLidos += 1;
    }
    media = (tot / qtdNumerosLidos);
    printf("Voce digitou %d numeros\n", qtdNumerosLidos);
    printf("A media dos numeros é %.1f\n", media);
    printf("O maior numero lido foi %d e o menor foi %d\n", maior, menor);
    return 0;
}