#include <stdio.h>
#include <math.h>

float yGreaterThan0(float x)
{
    float total = 0;
    for (int i = 1; i <= 100; i++)
    {
        total += (x + i) / i;
    }

    return total;
}

float yLessEquals0(float x)
{
    float total = 0;
    int divisor = 100;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
            total += (pow(x, 2) + i) / divisor;
        else
            total -= (pow(x, 2) + i) / divisor;
        divisor--;
    }
    return total;
}

int main()
{
    float x;
    printf("Digite um valor para x: \n");
    scanf("%f", &x);
    if (x > 0)
        printf("Y = %.2f\n", yGreaterThan0(x));
    else
        printf("Y = %.2f\n", yLessEquals0(x));
}