
/*
Solicitar dois números inteiros e mostrar ao usuário o resultado da soma,
subtração do maior pelo menor, da multiplicação e da divisão do maior pelo
menor. Na divisão, caso o segundo valor seja 0, informar que não será possível a
divisão.
*/
#include <stdio.h>

int main()
{
    int n1, n2, maior, menor;
    printf("Digite o primeiro número: \n");
    scanf("%d", &n1);
    printf("Digite o segundo número: \n");
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
    printf("%d + %d = %d\n", maior, menor, maior + menor);
    printf("%d - %d = %d\n", maior, menor, maior - menor);
    printf("%d x %d = %d\n", maior, menor, maior * menor);
    if (menor == 0)
        printf("Não é possível dividir por 0\n");
    else
        printf("%d / %d = %d\n", maior, menor, maior / menor);

    return 0;
}