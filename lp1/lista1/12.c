/*
Solicitar 3 valores de ponto flutuante e calcular a média.

*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    printf("Digite o primeiro valor de ponto flutuante: \n");
    scanf("%f", &n1);
    printf("Digite o segundo valor de ponto flutuante: \n");
    scanf("%f", &n2);
    printf("Digite o terceiro valor de ponto flutuante: \n");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    printf("A média é %.2f", media);

    return 0;
}