/*
Escreva um programaa que implemente o seguinte menu de opções:
-> CRIAR DISCIPLINA (esta opção atribui código e nome à disciplina, além de
inicializar os campos MATRÍCULA dos alunos, atribuindo a eles o valor zero).
-> INCLUIR ALUNO (verifica antes se há vagas na turma, procurando por um
elemento do vetor TURMA tal que o campo MATRICULA do ALUNO seja igual
a zero)
-> EXCLUIR ALUNO (dado um número de matrícula de um aluno, procurar pelo
mesmo e trocar o valor do campo MATRICULA para zero)
-> LISTAR ALUNOS (todos os dados, de todos os alunos da disciplina)
-> CALCULAR CR MÉDIO dos alunos inscritos na disciplina
-> IMPRIMIR BOLETIM de alunos da disciplina (imprimindo um relatório onde
conste a relação de todos os alunos, seus respectivos cursos, números de matrícula,
total de faltas e nota na disciplina.
-> FECHAR DISCIPLINA (atribui para os campos código e nome o valor ‘ ‘ (ou
ASCII=32) e, para os campos MATRÍCULA dos alunos, o valor zero).
-> SAIR
OBSERVAÇÕES:
-> Uma DISCIPLINA é definida por uma estrutura contendo os campos:
CÓDIGO, NOME e TURMA.
-> TURMA é um vetor de 40 elementos do tipo ALUNOSMAT.
-> Um ALUNOMAT é um registro, formado pelos campos ALUNO, NOTAS e
FALTAS.
-> O campo ALUNO é um registro, formado pelos campos NOME, IDADE,
CURSO, CR e MATRÍCULA.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[40];
    int idade;
    char curso[40];
    float cr;
    long int matricula;
} aluno;
typedef struct
{
    aluno aluno;
    int notas[4];
    int faltas;
} alunosmat;

typedef struct
{
    char codigo[10];
    char nome[40];
    alunosmat turma[40];
} disciplina_struct;

disciplina_struct *cria_disciplina()
{
    disciplina_struct *disciplina;
    disciplina = (disciplina_struct *)malloc(sizeof(disciplina) + sizeof(disciplina->turma));

    printf("Digite o CÓDIGO da disciplina: \n");
    fflush(stdin);
    gets(disciplina->codigo);
    printf("Digite o NOME da disciplina: \n");
    fflush(stdin);
    gets(disciplina->nome);
    for (int i = 0; i < 40; i++)
    {
        disciplina->turma[i].aluno.matricula = 0;
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Disciplina cadastrada: \nNOME: %s\nCÓDIGO: %s\n", disciplina->nome, disciplina->codigo);
    return disciplina;
}

void incluir_aluno(disciplina_struct *disciplina)
{
    for (int i = 0; i < 40; i++)
    {
        if (disciplina->turma[i].aluno.matricula == 0)
        {
            printf("Digite o nome do aluno: \n");
            fflush(stdin);
            gets(disciplina->turma[i].aluno.nome);
            printf("Digite a idade do aluno: \n");
            scanf("%d", &disciplina->turma[i].aluno.idade);
            printf("Digite o curso do aluno: \n");
            fflush(stdin);
            gets(disciplina->turma[i].aluno.curso);
            printf("Digite a matrícula do aluno: \n");
            scanf("%d", &disciplina->turma[i].aluno.matricula);
            printf("Digite o CR do aluno: \n");
            scanf("%f", &disciplina->turma[i].aluno.cr);
            disciplina->turma[i].notas[0] = 0;
            disciplina->turma[i].notas[1] = 0;
            disciplina->turma[i].notas[2] = 0;
            disciplina->turma[i].notas[3] = 0;
            disciplina->turma[i].faltas = 0;
            break;
        }
    }
}

void excluir_aluno(disciplina_struct *disciplina)
{
    int matricula;
    int aluno_excluido = 0;
    printf("Digite a matrícula do aluno a ser excluído: ");
    scanf("%d", &matricula);
    for (int i = 0; i < 40; i++)
    {
        if (disciplina->turma[i].aluno.matricula == matricula)
        {
            disciplina->turma[i].aluno.matricula = 0;
            aluno_excluido = 1;
            break;
        }
    }
    if (aluno_excluido == 1)
    {
        printf("Aluno excluído da disciplina!\n");
    }
    else
    {
        printf("Aluno não encontrado!\n");
    }
}

void listar_alunos(disciplina_struct *disciplina)
{
    for (int i = 0; i < 40; i++)
    {
        if (disciplina->turma[i].aluno.matricula != 0)
        {
            printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("NOME: %s\n", disciplina->turma[i].aluno.nome);
            printf("IDADE: %d\n", disciplina->turma[i].aluno.idade);
            printf("CURSO: %s\n", disciplina->turma[i].aluno.curso);
            printf("MATRÍCULA: %d\n", disciplina->turma[i].aluno.matricula);
            printf("CR: %.2f\n", disciplina->turma[i].aluno.cr);
        }
    }
}

void calcula_cr_medio(disciplina_struct *disciplina)
{
    float media;
    float total = 0;
    int contador = 0;
    for (int i = 0; i < 40; i++)
    {
        if (disciplina->turma[i].aluno.matricula != 0)
        {
            total += disciplina->turma[i].aluno.cr;
            contador += 1;
        }
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (contador == 0)
    {
        printf("Não há alunos cadastrados na turma.\n");
    }
    else
    {
        media = total / contador;
        printf("O CR médio dos alunos inscritos na disciplina é %.2f\n", media);
    }
}

void imprimir_boletins(disciplina_struct *disciplina)
{
    for (int i = 0; i < 40; i++)
    {
        if (disciplina->turma[i].aluno.matricula != 0)
        {
            printf("NOME: %s\n", disciplina->turma[i].aluno.nome);
            printf("IDADE: %d\n", disciplina->turma[i].aluno.idade);
            printf("CURSO: %s\n", disciplina->turma[i].aluno.curso);
            printf("MATRÍCULA: %d\n", disciplina->turma[i].aluno.matricula);
            printf("CR: %.2f\n", disciplina->turma[i].aluno.cr);
            printf("FALTAS: %d\n", disciplina->turma[i].faltas);
            printf("NOTAS: ");
            for (int j = 0; j < 4; j++)
            {
                printf("%d | ", disciplina->turma[i].notas[j]);
            }
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        }
    }
}

void fechar_disciplina(disciplina_struct *disciplina)
{
    strcpy(disciplina->nome, "");
    strcpy(disciplina->codigo, "");
    for (int i = 0; i < 40; i++)
    {
        disciplina->turma[i].aluno.matricula = 0;
    }
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Disciplina fechada.\n");
}

void main()
{
    int n;
    int disciplina_criada = 0;
    disciplina_struct *nova_disciplina;

    while (1)
    {
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("[ 1 ] CRIAR DISCIPLINA\n[ 2 ] INCLUIR ALUNO\n");
        printf("[ 3 ] EXCLUIR ALUNO\n[ 4 ] LISTAR ALUNOS\n");
        printf("[ 5 ] CALCULAR CR MÉDIO DA DISCIPLINA\n[ 6 ] IMPRIMIR BOLETINS\n");
        printf("[ 7 ] FECHAR DISCIPLINA\n[ 8 ] SAIR\n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        scanf("%d", &n);
        if (n == 8)
        {
            printf("Bye-bye ≧ ◠‿◠ ≦");
            break;
        }
        if (n == 1)
        {
            nova_disciplina = cria_disciplina();
            disciplina_criada = 1;
        }
        else
        {
            if (disciplina_criada == 0)
            {
                printf("Disciplina não foi criada.\n");
            }
            else
            {
                if (n == 2)
                {
                    incluir_aluno(nova_disciplina);
                }
                else if (n == 3)
                {
                    excluir_aluno(nova_disciplina);
                }
                else if (n == 4)
                {
                    listar_alunos(nova_disciplina);
                }
                else if (n == 5)
                {
                    calcula_cr_medio(nova_disciplina);
                }
                else if (n == 6)
                {
                    imprimir_boletins(nova_disciplina);
                }
                else if (n == 7)
                {
                    fechar_disciplina(nova_disciplina);
                    disciplina_criada = 0;
                }
            }
        }
    }
}
