/*Faça um programa que leia uma linha de texto e substitua cada vogal
lida por N vogais iguais, onde N representa o número de vogais lidas até
então. Para os demais caracteres, o programa deve imprimir apenas o
próprio caractere. Considere que o usuário digitará apenas caracteres
minúsculos. Ex:
Texto lido: apenas um exemplo!
Texto impresso: apeenaaas uuuum eeeeexeeeeeemplooooooo!*/

#include <stdio.h>
#include <string.h>

int main()
{

    char texto[50];
    int contadorVogal = 0;

    printf("Digite seu texto: \n");
    gets(texto); // vai ler até achar enter
    for (int i = 0; i < strlen(texto); i++)
    {

        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
        {
            for (int j = 0; j < contadorVogal; j++)
            {
                printf("%c", texto[i]);
            }
            contadorVogal++;
        }
        printf("%c", texto[i]);
    }
}