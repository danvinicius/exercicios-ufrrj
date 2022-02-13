#include <stdio.h>

int main()
{
    system("clear || cls");
    int num, div, subtracoes, resto;
    subtracoes = 0;
    printf("Digite um número inteiro para ser dividido: \n");
    scanf("%d", &num);
    printf("Digite o divisor: \n");
    scanf("%d", &div);
    resto = num;
    while (resto >= div)
    {
        resto -= div;
        subtracoes++;
    }
    /*
    9/2
    => 9-2=7
    => 7-2=5
    => 5-2=3
    => 3-2=1.
    */

    printf("O quociente da divisão %d/%d é %d e o resto é %d\n", num, div, subtracoes, resto);

    return 0;
}