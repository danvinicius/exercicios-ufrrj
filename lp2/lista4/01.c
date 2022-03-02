/*Leia um vetor de 20 posições e mostre-o. Em seguida, troque o primeiro
elemento com o último, o segundo com o penúltimo, o terceiro com o
antepenúltimo, e assim sucessivamente. Mostre o novo vetor depois da
troca.*/

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
