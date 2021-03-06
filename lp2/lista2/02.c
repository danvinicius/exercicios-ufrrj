/*
Leia um número inteiro menor do que 10 e imprima todos os seus múltiplos
dentro do intervalo [1, 100], em ordem decrescente. Ex:
num = 8
Múltiplos = 88, 80, 72, 64, 56, 48, 40, 32, 24, 16, 8, 1
*/

#include <stdio.h>

int main()
{
    system("clear || cls");
    int num, max;
    printf("Digite um número de 0 a 10: \n");
    scanf("%d", &num);
    while (num > 10 || num < 0)
    {
        printf("Digite somente números de 0 a 10: \n");
        scanf("%d", &num);
    }
    printf("Múltiplos de %d no intervalo de 0 a 100: ", num);
    for (max = 100; max >= 1; max--)
    {
        if (max % num == 0)
            printf("%d\n ", max);
    }

    return 0;
}