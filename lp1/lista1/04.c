// Solicitar um número e mostrar se ele é par ou se ele é ímpar.
#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número: \n");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d é par", num);
    else
        printf("%d é ímpar", num);

    return 0;
}