/*
Solicitar dois números inteiros e mostrar ao usuário o resultado da soma,
subtração do primeiro pelo segundo, da multiplicação e da divisão do primeiro
pelo segundo. Na divisão, caso o segundo valor seja 0, informar que não será
possível a divisão.
*/
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Digite o primeiro número: \n");
    scanf("%d", &n1);
    printf("Digite o segundo número: \n");
    scanf("%d", &n2);
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d x %d = %d\n", n1, n2, n1 * n2);
    if (n2 == 0)
        printf("Não é possível dividir por 0\n");
    else
        printf("%d / %d = %d\n", n1, n2, n1 / n2);

    return 0;
}