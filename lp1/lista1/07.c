/*
Solicitar um número inteiro N e mostrar todos os números inteiros entre 1 e
N. Utilize as estruturas de repetição FAÇA PARA.
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número inteiro: \n");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
        printf("%d\n", i);

    return 0;
}