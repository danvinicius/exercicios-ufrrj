#include <stdio.h>

int main()
{

    int lista[30];
    int n, maior;
    int totalNumerosLidos, contador;
    totalNumerosLidos = contador = 0;
    for (int i = 0; i < 30; i++)
    {
        printf("Digite o %d° elemento da lista: [negativo para parar]\n", i + 1);
        scanf("%d", &n);
        if (n < 0)
            break;
        lista[i] = n;
        totalNumerosLidos++;
    }
    for (int i = 0; i < totalNumerosLidos; i++)
    {
        if (i == 0)
            maior = lista[i];
        else
        {
            if (lista[i] > maior)
                maior = lista[i];
        }
    }
    for (int i = 0; i < totalNumerosLidos; i++)
    {
        if (lista[i] == maior)
            contador += 1;
    }
    printf("O maior número do conjunto é o %d, que apareceu %d vezes no total.\n", maior, contador);
}