/*Faça um programa que leia uma quantidade indeterminada de números
reais positivos x até que o usuário digite um número negativo ou zero.
Escreva uma função chamada func() que deverá receber x como
parâmetro e retornar um valor real, de acordo com a definição abaixo.
Além da função func(), cada opção de x deverá ser calculada em uma
nova subrotina (ex: se x>=10, será chamada, de dentro de func(x) a
subrotina xless10(x), que retorna o valor da primeira expressão:

func(x) = (√x-10)/2, se x >= 10
func(x) = (√x²+1)/2, se x <= 4
func(x) = x³/(x²-16), se 4 < x < 10
*/

#include <math.h>
#include <stdio.h>
float xGreaterEquals10(float x)
{
    return sqrt(x - 10) / 2;
}
float xLessEquals4(float x)
{
    return sqrt(pow(x, 2) + 1) / 2;
}
float xGreater4Less10(float x)
{
    return pow(x, 3) / (pow(x, 2) - 16);
}
float func(float x)
{
    if (x >= 10)
        return xGreaterEquals10(x);
    else if (x <= 4)
        return xLessEquals4(x);
    else if (4 < x && x < 10)
        return xGreater4Less10(x);
}

int main()
{
    float x;
    while (1)
    {
        printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Digite um número [negativo ou 0 para parar]: \n");
        scanf("%f", &x);
        if (x <= 0)
            break;
        printf("func(x) = %f\n", func(x));
    }
    printf("Bye-bye ≧ ◠‿◠ ≦");
}