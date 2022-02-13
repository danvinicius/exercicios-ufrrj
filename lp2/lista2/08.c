#include <stdio.h>

int main()
{
    system("clear || cls");
    int num;
    printf("TABUADA\n=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite um número: \n");
    scanf("%d", &num);
    printf("Tabuada de %d:\n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}