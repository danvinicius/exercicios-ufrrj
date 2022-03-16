// Solicitar dois número inteiros e mostrar qual deles é o maior.
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Digite o primeiro número: \n");
    scanf("%d", &n1);
    printf("Digite o segundo número: \n");
    scanf("%d", &n2);
    if (n1 > n2)
        printf("%d é o maior", n1);
    else if (n2 > n1)
        printf("%d é o maior", n2);
    else
        printf("São iguais");

    return 0;
}