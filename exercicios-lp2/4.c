/*4.
a precisão do C diminui com números (x) acima de 10
*/

#include <stdio.h>
#include <math.h>

int main()
{

    float x, temp, i, senx, fatorial;
    senx = i = 0;
    printf("Digite o valor de x: \n");
    scanf("%f", &x);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    for (int termos = 1; termos <= 20; termos++)
    {
        // fatorial
        fatorial = termos + (termos - 1);
        temp = fatorial - 1;
        while (temp > 1)
        {
            fatorial *= temp;
            temp--;
        }
        /*
        termos -  fatorial
            1  -   1 -> 1
            2  -   3 -> 3*2*1
            3  -   5 -> 5*4*3*2*1
            4  -   7 -> 7*6*5*4*3*2*1
        */

        // série de senos
        senx += pow(-1, i) * pow(x, termos + (termos - 1)) / fatorial;
        i++;
        if (termos > 10)
            printf("%.10f\n", senx);
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    return 0;
}
