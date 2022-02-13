#include <stdio.h>

int main()
{
    system("clear || cls");
    int numeros[20], numero, tamanhoLista;
    tamanhoLista = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("Digite um número (negativo para parar): \n");
        scanf("%d", &numero);
        if (numero >= 0)
        {
            numeros[i] = numero;
            tamanhoLista++;
        }
        else
            break;
    }
    for (int j = 0; j < tamanhoLista; j++)
    {
        printf("=-=-=-=-==--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Divisores de %d: ", numeros[j]);
        for (int k = 1; k <= numeros[j]; k++)
        {
            if (numeros[j] % k == 0)
                printf("%d, ", k);
        }
        printf("\n");
    }

    return 0;
}