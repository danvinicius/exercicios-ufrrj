#include <stdio.h>
#include <math.h>

float yGreaterThan0(float x)
{
    float y = 0;
    for (int i = 1; i <= 100; i++)
        y += (x + i) / i;
    return y;
}

float yLessEquals0(float x)
{
    float y = 0;
    int divisor = 100;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
            y += (pow(x, 2) + i) / divisor;
        else
            y -= (pow(x, 2) + i) / divisor;
        divisor--;
    }
    return y;
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