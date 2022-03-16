/*
Repita o exercício anterior utilizando a estrutura de repetição FAÇA ATÉ.
*/

#include <stdio.h>

int main()
{
    int num, k;
    k = 1;
    printf("Digite um número inteiro: \n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", k);
        k++;
    } while (k < num);

    return 0;
}