#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maiusculas(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (*(str + i) >= 97 && *(str + i) <= 122)
        {
            *(str + i) -= 32;
        }
    }
    printf("%s\n", str);
}

char concatena(char *str1, char *str2)
{
    int j = strlen(str1);
    for (int i = 0; i < strlen(str2) + 1; i++)
    {
        *(str1 + j) = *(str2 + i);
        j++;
    }
    return str1;
}

int capitaliza(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (i == 0)
        {
            if (*(str + i) >= 97 && *(str + i) <= 122)
                *(str + i) -= 32;
        }
        else if (*(str + i) == 32)
        {
            if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
                *(str + i + 1) -= 32;
        }
    }
    printf("%s\n", str);
    return strlen(str);
}

int compara(char *str1, char *str2)
{
    int resultado, tamanhoMenorString;
    resultado = 0;
    if (strlen(str1) < strlen(str2))
        tamanhoMenorString = strlen(str1);
    else
        tamanhoMenorString = strlen(str2);
    for (int i = 0; i < tamanhoMenorString; i++)
    {
        if (*(str1 + i) == *(str2 + i))
            continue;
        else if (*(str1 + i) < *(str2 + i))
        {
            resultado = -1;
            break;
        }
        else
        {
            resultado = 1;
            break;
        }
    }
    return resultado;
}

int main()
{
    char string1[30], string2[30];
    int op, tamanhoString;
    printf("Digite a primeira string: ");
    gets(string1);
    printf("Digite a segunda string: ");
    gets(string2);

    printf("\nQual operação deseja realizar? \n");
    printf("[1] Converter pra maiúsculo\n[2] Concatenar strings\n");
    printf("[3] Capitalizar string\n[4] Comparar strings\n");
    scanf("%d", &op);
    if (op == 1)
    {
        maiusculas(string1);
        maiusculas(string2);
    }
    if (op == 2)
    {
        concatena(string1, string2);
        printf("Concatenação: %s\n", string1);
    }
    if (op == 3)
    {
        tamanhoString = capitaliza(string1);
        printf("A string tem %d caracteres preenchidos\n", tamanhoString);
    }
    if (op == 4)
    {
        int resultado = compara(string1, string2);
        printf("%d\n", resultado);
    }
    return 0;
}