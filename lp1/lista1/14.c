/*
Solicitar vários valores, e quando o usuário digitar um valor negativo, o
programa mostrar a soma de todos os valores digitados e termina sua execução.
*/
#include <stdio.h>

int main()
{
    int num, acumulador;
    acumulador = num = 0;
    while (num >= 0)
    {
        acumulador += num;
        printf("Digite um valor: (negativo p/ parar)\n");
        scanf("%d", &num);
    }
    printf("A soma dos valores digitados é %d\n", acumulador);
    return 0;
}