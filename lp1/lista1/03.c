// Solicitar dois números inteiros e mostrar qual é o menor.
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Digite o primeiro número: \n");
    scanf("%d", &n1);
    printf("Digite o segundo número: \n");
    scanf("%d", &n2);
    if (n1 < n2)
        printf("%d é o menor", n1);
    else if (n2 < n1)
        printf("%d é o menor", n2);
    else
        printf("São iguais");

    return 0;
}