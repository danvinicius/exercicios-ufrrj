#include <stdio.h>
#include <string.h>

int main()
{

    char texto[50];
    int contadorVogal = 0;

    printf("Digite seu texto: \n");
    scanf("%[^\n]", &texto); // vai ler até achar enter
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