/*
Solicite dois valores inteiros ao usuário e mostre todos os valores inteiros,
iniciando no valor menor até o valor maior, inclusive.
*/
#include <stdio.h>

int main()
{
    int n1, n2, maior, menor;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        maior = n1;
        menor = n2;
    }
    else
    {
        maior = n2;
        menor = n1;
    }
    for (int i = menor; i <= maior; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}