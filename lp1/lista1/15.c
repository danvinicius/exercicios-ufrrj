/*
Solicitar vários valores inteiros e apos o usuário digitar qualquer valor
negativo, o programa deverá mostrar o maior e o menor valor digitado.
*/

#include <stdio.h>

int main()
{
    int num, maior, menor, contador;
    contador = 0;
    while (1)
    {
        printf("Digite um valor: (negativo p/ parar)\n");
        scanf("%d", &num);
        if (num >= 0)
        {
            if (contador == 0)
                maior = menor = num;
            else
            {
                if (num > maior)
                    maior = num;
                else if (num < menor)
                    menor = num;
            }
        }
        else
            break;
        contador++;
    }
    printf("O maior valor digitado foi %d e o menor foi %d\n", maior, menor);
    return 0;
}