/*
Escreva um programa que implemente uma calculadora com o seguinte
menu de opções (use uma estrutura de repetição que só será encerrada
quando o usuário escolher a opção FIM), onde TODAS as opções
deverão ser implementadas usando uma FUNÇÃO RECURSIVA:
1) Fatorial de N
2) XY (XY = X*XY-1
)

3) X*Y (usando o método de somas sucessivas) (X*Y = X+(X*Y-1) )
4) X mod Y (X=X-Y enquanto X for maior do que Y)
5) Sequência de N termos de Fibonacci (Ni= Ni-1+Ni-2)
*/

#include <math.h>
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

int potencia(int n, int exp)
{
    if (exp == 0)
        return 1;
    return n * potencia(n, exp - 1);
    /*
    2 ^ 5 = 2 * (2 * (2 * (2 * (2 * (1)))))
    */
}

int multiplicaoPorSomas(int x, int y)
{
    if (y == 0)
        return 0;
    return x + multiplicaoPorSomas(x, y - 1);
    /*
        3 * 5 = 3 + (3 + (3 + (3 + (3 + (0)))))
    */
}

int modulo(int x, int y)
{
    if (x < y)
        return x;
    return modulo(x - y, y);
    /*
        10, 3
        7 , 3
        4 , 3
        1 , 3
    */
}

int fibonacci(int n)
{
    if (n == 1)
        return (1);
    if (n == 2)
        return (1);
    return fibonacci(n - 1) + fibonacci(n - 2);
    /*fib4 = (fib3 + fib2) = (fib2 + fib1 + 1) =
    (1 + 1 + 1) = 3 (último número da sequência)*/
}

int main()
{
    int opcao, num, exp, x, y, total;
    while (1)
    {
        printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Digite sua opção: \n");
        printf("[1] Fatorial\n[2] Potência\n[3] Multiplicação\n[4] Módulo\n[5] Sequência de Fibonacci\n[6] FIM\n");
        scanf("%d", &opcao);
        while (opcao < 1 || opcao > 6)
        {
            printf("Escolha uma opção entre 1 e 5\n");
            printf("[1] Fatorial\n[2] Potência\n[3] Multiplicação\n[4] Módulo\n[5] Sequência de Fibonacci\n[6] FIM\n");
            scanf("%d", &opcao);
        }
        if (opcao == 6)
            break;
        switch (opcao)
        {
        case 1:
            printf("Qual número você deseja calcular o fatorial? \n");
            scanf("%d", &num);
            int fatNum = fatorial(num);
            printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("O fatorial de %d é %d\n", num, fatNum);

            break;
        case 2:
            printf("Qual número será a base da potência? \n");
            scanf("%d", &num);
            printf("Qual número será o expoente da potência? \n");
            scanf("%d", &exp);
            int potNum = potencia(num, exp);
            printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("%d elevado a %d é igual a %d\n", num, exp, potNum);
            break;
        case 3:
            printf("Digite o primeiro número: \n");
            scanf("%d", &x);
            printf("Digite o segundo número: \n");
            scanf("%d", &y);
            int multNum = multiplicaoPorSomas(x, y);
            printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("%d vezes %d é igual a %d\n", x, y, multNum);
            break;
        case 4:
            printf("Digite o primeiro número: \n");
            scanf("%d", &x);
            printf("Digite o segundo número: \n");
            scanf("%d", &y);
            int modNum = modulo(x, y);
            printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("O módulo (resto) de %d/%d é %d\n", x, y, modNum);
            break;
        case 5:
            printf("Quantos termos você deseja calcular?: \n");
            scanf("%d", &num);
            total = 0;
            printf("=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("0 ");
            for (int i = 1; i <= num; i++)
            {
                printf("+ %d ", fibonacci(i));
                total += fibonacci(i);
            }
            printf("= %d\n", total);
            break;
        default:
            break;
        }
    }
    printf("Bye-bye ≧ ◠‿◠ ≦");
}