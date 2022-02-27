#include <stdio.h>

int main()
{

    int lancamentos[40];
    int n, saiuMaisVezes, saiuMaisVezesContador, totalDeLancamentos;
    totalDeLancamentos = saiuMaisVezes = 0;
    for (int i = 0; i < 40; i++)
    {
        printf("Digite o resultado do %d° lançamento: [0 ou negativo para parar]\n", i + 1);
        scanf("%d", &n);
        if (n <= 0)
            break;
        while (n > 6)
        {
            printf("Digite somente números entre 1 e 6.\n");
            scanf("%d", &n);
        }

        lancamentos[i] = n;
        totalDeLancamentos++;
    }
    for (int i = 1; i <= 6; i++)
    {
        // Faz o loop pelo vetor n vezes, onde n é o numero de faces lidas
        int cont = 0;
        for (int j = 0; j < totalDeLancamentos; j++)
        {
            if (lancamentos[j] == i)
                cont++;
        }

        // verifica quem saiu mais vezes
        if (i == 1)
        {
            saiuMaisVezesContador = cont;
            saiuMaisVezes = i;
        }
        else
        {
            if (cont > saiuMaisVezesContador)
                saiuMaisVezes = i;
        }

        // Conta quantas vezes cada face saiu
        if (cont == 0)
            printf("O número %d não foi lançado nenhuma vez.\n", i);
        else if (cont == 1)
            printf("O número %d foi lançado 1 vez.\n", i);
        else
            printf("O número %d foi lançado %d vezes.\n", i, cont);
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("A face %d foi a que saiu mais vezes.", saiuMaisVezes);
}
