#include <stdio.h>
#include <string.h>

main()
{
    int linhas, contador, totalCaracteresPorLinha, tamanhoCentralizado;
    contador = 0;
    totalCaracteresPorLinha = 1;
    printf("Quantas linhas serao impressas?\n");
    scanf("%d", &linhas);
    while (contador < linhas)
    {
        tamanhoCentralizado = (linhas + (linhas - 1) - totalCaracteresPorLinha) / 2;
        /*pega o total de caracteres da ultima linha para saber o tamanho maximo
        da arvore, subtrai um e divide por dois para pegar a metade*/

        for (int j = 0; j < tamanhoCentralizado; j++)
        {
            printf(" ");
        }
        for (int i = 0; i < totalCaracteresPorLinha; i++)
            printf("*");
        totalCaracteresPorLinha += 2;
        printf("\n");
        contador++;
    }
    return 0;
}