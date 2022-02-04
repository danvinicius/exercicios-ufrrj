#include <stdio.h>

main()
{
    int linhas, cont, totalCaracteresPorLinha;
    cont = 0;
    totalCaracteresPorLinha = 1;
    printf("Quantas linhas serao impressas?\n");
    scanf("%d", &linhas);
    while (cont < linhas)
    {
        for (int i = 0; i < totalCaracteresPorLinha; i++)
            printf("*");
        totalCaracteresPorLinha += 2;
        printf("\n");
        cont++;
    }
    return 0;
}