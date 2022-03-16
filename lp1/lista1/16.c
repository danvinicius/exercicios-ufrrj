/*
Solicitar do usuário o nome e 4 notas de uma aluno, calcule a média final e
mostre a situação do aluno está aprovado ou não, sabendo que a média limite
para reprovação é 6,0.
*/

#include <stdio.h>

int main()
{
    char nome[30];
    float nota1, nota2, nota3, nota4, media;
    printf("Digite o nome do aluno: \n");
    scanf("%s", &nome);
    printf("Digite a primeira nota do aluno: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno: \n");
    scanf("%f", &nota3);
    printf("Digite a quarta nota do aluno: \n");
    scanf("%f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A média do aluno %s foi de %.2f ", nome, media);
    if (media < 6)
        printf("e ele está reprovado");
    else
        printf("e ele está aprovado");
    return 0;
}