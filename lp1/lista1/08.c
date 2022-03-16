/*
Repita o exercício anterior utilizando a estrutura de repetição ENQUANTO
FAÇA.
*/
#include <stdio.h>

int main()
{
    int num, k;
    k = 1;
    printf("Digite um número inteiro: \n");
    scanf("%d", &num);
    while (k < num)
    {
        printf("%d\n", k);
        k++;
    }

    return 0;
}