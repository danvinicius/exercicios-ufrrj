/*
Solicitar um valor entre 1 e 10 e montar a tabuada deste número. A tabuada
é formada pelos valores de 0 a 9 multiplicado pelo valor informado.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Digite um valor entre 1 e 10 para a tabuada: \n");
    scanf("%d", &num);
    while (num < 0 || num > 10)
    {
        printf("Por favor, digite somente entre 1 e 10: \n");
        scanf("%d", &num);
    }
    for (int i = 0; i < 10; i++)
        printf("%d x %d = %d\n", num, i, num * i);
    return 0;
}