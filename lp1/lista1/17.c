/*
Repita o exercício acima para que ele execute até que o usuário digite 'N' a
pergunta: 'Deseja calcular outra média? (S/N)'.
*/

#include <stdio.h>

int main()
{
    char nome[30];
    char resp;
    int continua = 1;
    float nota1, nota2, nota3, nota4, media;
    while (continua)
    {
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
            printf("e ele está reprovado.\n");
        else
            printf("e ele está aprovado.\n");
        printf("Deseja calcular outra média? [S/N]\n");
        scanf("%s", &resp);
        if (resp == 'n' || resp == 'N')
            continua = 0;
    }
    printf("Finalizando programa...\n");

    return 0;
}