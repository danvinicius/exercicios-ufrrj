#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    int disciplinaCriada = 0;

    struct aluno
    {
        char nome[40];
        int idade;
        char curso[40];
        float cr;
        long int matricula;
    };
    struct alunosmat
    {
        struct aluno aluno;
        int notas[4];
        int faltas;
    };

    struct disciplina
    {
        char codigo[10];
        char nome[40];
        struct alunosmat turma[40];
    } novaDisciplina;

    while (1)
    {
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("[ 1 ] CRIAR DISCIPLINA\n[ 2 ] INCLUIR ALUNO\n");
        printf("[ 3 ] EXCLUIR ALUNO\n[ 4 ] LISTAR ALUNOS\n");
        printf("[ 5 ] CALCULAR CR MÉDIO DA DISCIPLINA\n[ 6 ] IMPRIMIR BOLETINS\n");
        printf("[ 7 ] FECHAR DISCIPLINA\n[ 8 ] SAIR\n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        scanf("%d", &n);

        if (n == 1)
        {
            char nome[40];
            printf("Digite o CÓDIGO da disciplina: \n");
            scanf("%s", &novaDisciplina.codigo);
            printf("Digite o NOME da disciplina: \n");
            scanf("%s", &novaDisciplina.nome);
            for (int i = 0; i < 40; i++)
            {
                novaDisciplina.turma[i].aluno.matricula = 0;
            }
            disciplinaCriada = 1;
            printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Disciplina cadastrada: \nNOME: %s\nCÓDIGO: %s\n", novaDisciplina.nome, novaDisciplina.codigo);
        }
        else if (n == 2)
        {
            if (disciplinaCriada == 0)
            {
                printf("Disciplina não foi criada.\n");
            }
            else
            {
                for (int i = 0; i < 40; i++)
                {
                    if (novaDisciplina.turma[i].aluno.matricula == 0)
                    {
                        printf("Digite o nome do aluno: \n");
                        scanf("%s", &novaDisciplina.turma[i].aluno.nome);
                        printf("Digite a idade do aluno: \n");
                        scanf("%d", &novaDisciplina.turma[i].aluno.idade);
                        printf("Digite o curso do aluno: \n");
                        scanf("%s", &novaDisciplina.turma[i].aluno.curso);
                        printf("Digite a matrícula do aluno: \n");
                        scanf("%d", &novaDisciplina.turma[i].aluno.matricula);
                        printf("Digite o CR do aluno: \n");
                        scanf("%f", &novaDisciplina.turma[i].aluno.cr);
                        novaDisciplina.turma[i].notas[0] = 0;
                        novaDisciplina.turma[i].notas[1] = 0;
                        novaDisciplina.turma[i].notas[2] = 0;
                        novaDisciplina.turma[i].notas[3] = 0;
                        novaDisciplina.turma[i].faltas = 0;
                        break;
                    }
                }
                printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("Aluno cadastrado\n");
            }
        }
        else if (n == 3)
        {
            if (disciplinaCriada == 0)
            {
                printf("Disciplina não foi criada.\n");
            }
            else
            {
                int matricula;
                int alunoExcluido = 0;
                printf("Digite a matrícula do aluno a ser excluído: ");
                scanf("%d", &matricula);
                for (int i = 0; i < 40; i++)
                {
                    if (novaDisciplina.turma[i].aluno.matricula == matricula)
                    {
                        novaDisciplina.turma[i].aluno.matricula = 0;
                        alunoExcluido = 1;
                        break;
                    }
                }
                printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                if (alunoExcluido == 1)
                {
                    printf("Aluno excluído da disciplina!\n");
                }
                else
                {
                    printf("Aluno não encontrado!\n");
                }
            }
        }
        else if (n == 4)
        {
            if (disciplinaCriada == 0)
            {
                printf("Disciplina não foi criada.\n");
            }
            else
            {
                int temAluno = 0;
                for (int i = 0; i < 40; i++)
                {
                    if (novaDisciplina.turma[i].aluno.matricula != 0)
                    {
                        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                        printf("NOME: %s\n", novaDisciplina.turma[i].aluno.nome);
                        printf("IDADE: %d\n", novaDisciplina.turma[i].aluno.idade);
                        printf("CURSO: %s\n", novaDisciplina.turma[i].aluno.curso);
                        printf("MATRÍCULA: %d\n", novaDisciplina.turma[i].aluno.matricula);
                        printf("CR: %.2f\n", novaDisciplina.turma[i].aluno.cr);
                        temAluno = 1;
                    }
                }
                if (temAluno == 0)
                {
                    printf("Não há alunos na turma.\n");
                }
            }
        }
        else if (n == 5)
        {
            if (disciplinaCriada == 0)
            {
                printf("Disciplina não foi criada.\n");
            }
            else
            {
                float media;
                float total = 0;
                int contador = 0;
                for (int i = 0; i < 40; i++)
                {
                    if (novaDisciplina.turma[i].aluno.matricula != 0)
                    {
                        total += novaDisciplina.turma[i].aluno.cr;
                        contador += 1;
                    }
                }
                media = total / contador;
                printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                printf("O CR médio dos alunos inscritos na disciplina é %.2f\n", media);
            }
        }
        else if (n == 6)
        {
            if (disciplinaCriada == 0)
            {
                printf("Disciplina não foi criada.\n");
            }
            else
            {
                int temAluno = 0;
                for (int i = 0; i < 40; i++)
                {
                    if (novaDisciplina.turma[i].aluno.matricula != 0)
                    {
                        printf("NOME: %s\n", novaDisciplina.turma[i].aluno.nome);
                        printf("IDADE: %d\n", novaDisciplina.turma[i].aluno.idade);
                        printf("CURSO: %s\n", novaDisciplina.turma[i].aluno.curso);
                        printf("MATRÍCULA: %d\n", novaDisciplina.turma[i].aluno.matricula);
                        printf("CR: %.2f\n", novaDisciplina.turma[i].aluno.cr);
                        printf("FALTAS: %d\n", novaDisciplina.turma[i].faltas);
                        printf("NOTAS: ");
                        for (int j = 0; j < 4; j++)
                        {
                            printf("%d | ", novaDisciplina.turma[i].notas[j]);
                        }
                        temAluno = 1;
                        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
                    }
                }
                if (temAluno == 0)
                {
                    printf("Não há alunos na turma.\n");
                }
            }
        }
        else if (n == 7)
        {
            *novaDisciplina.codigo = "";
            *novaDisciplina.nome = "";
            for (int i = 0; i < 40; i++)
            {
                novaDisciplina.turma[i].aluno.matricula = 0;
            }
        }
        if (n == 8)
        {
            break;
        }
    }
}
