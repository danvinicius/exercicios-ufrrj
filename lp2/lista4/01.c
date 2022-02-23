#include <stdio.h>
int main()
{
    int lista[20], temp;
    for (int i = 0; i < 20; i++)
    {
        printf("Digite o %d° número da lista: \n", i + 1);
        scanf("%d", &lista[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        temp = lista[i];
        lista[i] = lista[19 - i];
        lista[19 - i] = temp;
    }
    for (int i = 0; i < 20; i++)
        printf("%d - ", lista[i]);
}
