#include "banco.h"

void main()
{
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    TCliente cliente;
    int res;
    int capacidade;
    int cpf;
    char nome[50];
    char endereco[50];
    char tel[10];
    float saldo;

    // Criando a lista
    printf("Bem-vinde ao banco DEIXE SEU DINHEIRO COMIGO");
    printf("\nQuantos clientes serão armazenados? ");
    scanf("%d", &capacidade);
    criarLista(lista, capacidade);

    // Criando o cliente
    printf("\nInsira os dados do cliente: ");
    printf("\nNome: ");
    fflush(stdin);
    gets(cliente.nome);
    printf("CPF: ");
    scanf("%d", &cliente.cpf);
    printf("Endereço: ");
    fflush(stdin);
    gets(cliente.endereco);
    printf("Telefone: ");
    fflush(stdin);
    gets(cliente.tel);
    printf("Saldo inicial: ");
    scanf("%f", &cliente.saldo);

    // Funções
    res = inserirCliente(lista, cliente);
    if (res == 1)
        printf("\nCliente cadastrado com sucesso");
    else
        printf("\nFalha ao cadastrar cliente");
    res = saque(lista, cliente.cpf);
    if (res == 1)
        printf("\nSaque realizado com sucesso");
    else
        printf("\nFalha ao realizar saque");
    res = retirarCliente(lista, cliente.cpf);
    if (res == 1)
        printf("\nCliente removido com sucesso", res);
    else
        printf("\nFalha ao remover cliente");
    printf("\nFIM");
}