#include <stdio.h>

int fatorial(int n)
{
    if (n <= 1)
        return 1;
    return n * fatorial(n - 1);
    /*
        5! = 5 * (4 * (3 * (2 * (1))))
    */
}

int divisores(int n)
{
    int total = 0;
    printf("Divisores de %d: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
            total++;
        }
    }
    return total;
}

int somaDosInteiros(int n)
{
    if (n == 0)
        return 0;
    return n + somaDosInteiros(n - 1);
}

int main()
{
    int m, fatorialM, divisoresM, somaInteirosM, opcao;
    while (1)
    {
        if (opcao == 5)
            break;
        printf("Digite um número [negativo para parar]: \n");
        scanf("%d", &m);
        if (m < 0)
            break;
        printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        if (m % 2 == 0)
        {
            divisoresM = divisores(m);
            printf("(%d divisores)\n", divisoresM);
        }
        else if (m % 2 != 0 && m < 10)
        {
            fatorialM = fatorial(m);
            printf("O fatorial de %d é %d\n", m, fatorialM);
        }
        else if (m % 2 != 0 && m >= 10)
        {
            somaInteirosM = somaDosInteiros(m);
            printf("A soma dos inteiros de 1 até %d é %d\n", m, somaInteirosM);
        }
        while (1)
        {
            printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Deseja fazer outra operação com %d?\n", m);
            printf("[1] Número de divisores de %d\n", m);
            printf("[2] Fatorial de %d\n", m);
            printf("[3] Soma dos inteiros de 1 a %d\n", m);
            printf("[4] Outro número\n");
            printf("[5] Sair\n");
            scanf("%d", &opcao);
            if (opcao == 5)
                break;
            switch (opcao)
            {
            case 1:
                divisoresM = divisores(m);
                printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("(%d divisores)\n", divisoresM);
                break;
            case 2:
                fatorialM = fatorial(m);
                printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("O fatorial de %d é %d\n", m, fatorialM);
                break;
            case 3:
                somaInteirosM = somaDosInteiros(m);
                printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("A soma dos inteiros de 1 até %d é %d\n", m, somaInteirosM);
                break;
            default:
                break;
            }
            if (opcao == 4)
                break;
        }
    }
    printf("Bye-bye ≧ ◠‿◠ ≦");
}