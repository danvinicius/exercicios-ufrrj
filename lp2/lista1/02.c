// 2.

#include <stdio.h>
#include <math.h>

float main()
{
    int op;
    float num1, num2;
    op = 0;
    while (op != 8)
    {
        printf("Que operação você deseja fazer? \n [1] Soma\n [2] Subtração\n [3] Multiplicação\n [4] Divisão\n [5] Exponenciação\n [6] Logaritmo\n [7] Raiz quadrada\n [8] Sair\n");
        scanf("%d", &op);
        system("cls || clear");
        switch (op)
        {
        case 1:
            printf("Quais números você deseja somar? \n");
            printf("Primeiro número: \n");
            scanf("%f", &num1);
            printf("Segundo número: \n");
            scanf("%f", &num2);
            float soma = num1 + num2;
            printf("A soma entre %.0f e %.0f é %.2f \n", num1, num2, soma);
            break;
        case 2:
            printf("Quais números você deseja subtrair? \n");
            printf("Primeiro número: \n");
            scanf("%f", &num1);
            printf("Segundo número: \n");
            scanf("%f", &num2);
            float sub = num1 - num2;
            printf("A subtração entre %.0f e %.0f é %.2f \n", num1, num2, sub);
            break;
        case 3:
            printf("Quais números você deseja multiplicar? \n");
            printf("Primeiro número: \n");
            scanf("%f", &num1);
            printf("Segundo número: \n");
            scanf("%.0f", &num2);
            float mult = num1 * num2;
            printf("A multiplicação entre %.0f e %.0f é %.2f \n", num1, num2, mult);
            break;
        case 4:
            printf("Quais números você deseja dividir? \n");
            printf("Primeiro número: \n");
            scanf("%f", &num1);
            printf("Segundo número: \n");
            scanf("%f", &num2);
            float div = (float)num1 / num2;
            printf("A divisão entre %.0f e %.0f é %.2f\n", num1, num2, div);
            break;
        case 5:
            printf("Quais números você deseja fazer exponenciação? \n");
            printf("Base: \n");
            scanf("%f", &num1);
            printf("Expoente: \n");
            scanf("%f", &num2);
            float exp = pow(num1, num2);
            printf("%.0f elevado a %.0f é %.2f \n", num1, num2, exp);
            break;
        case 6:
            printf("Qual número será o logaritmando?\n");
            scanf("%f", &num1);
            float log = log10(num1);
            printf("O logaritmo de %.0f na base 10 é %.2f \n", num1, log);
            break;
        case 7:
            printf("Qual número será o radicando?\n");
            scanf("%f", &num1);
            float rad = sqrt(num1);
            printf("A raíz quadrada de %.0f é %.2f \n", num1, rad);
            break;
        case 8:
            printf("Bye-bye ≧ ◠‿◠ ≦");
            break;
        default:
            break;
        }
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    }

    return 0;
}