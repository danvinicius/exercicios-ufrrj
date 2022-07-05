#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Questão 1: O Banco DEIXE SEU DINHEIRO COMIGO deseja automatizar seus processos e
para isso deseja contratar você para montar os algoritmos. Algumas informações são necessárias :

a) cada cliente do banco possui os seguintes dados : nome . endereço, telefone , cpf e saldo.
b) Para fazer um saque é necessário que o cliente tenha saldo suficiente.
Fazer um programa em C para :
a) Verificar se um cliente está cadastrado ou não.
b) fazer retirada de uma determinada quantia de um cliente ;
c) Inserir um novo cliente ;
d) retirar um cliente.
*/

// Cliente
typedef struct
{
    int cpf;
    char nome[50];
    char endereco[50];
    char tel[10];
    float saldo;
} TCliente;

// Lista
typedef struct
{
    int capacidade;
    TCliente *dados;
    int ultimo;
} Lista;

void criarLista(Lista *lista, int capacidade)
{
    lista->capacidade = capacidade;
    lista->dados = (TCliente *)malloc(lista->capacidade * sizeof(float));
    lista->ultimo = -1;
}

int verifica(Lista *lista, int cpf)
{
    int res = -1;
    for (int i = 0; i < lista->ultimo + 1; i++)
    {
        if (lista->dados[i].cpf == cpf)
        {
            res = i;
            break;
        }
    }
    return res;
}

int saque(Lista *lista, int cpf)
{
    int res = verifica(lista, cpf);
    if (res == -1)
    {
        return -1;
    }
    else
    {
        float saque;
        if (lista->dados[res].saldo < 20)
        {
            printf("\nVocê não possui saldo suficiente");
        }
        else
        {
            printf("\nQuanto você deseja sacar?");
            scanf("%f", &saque);
            if (saque < 20)
            {
                printf("\nSó é permitido saque a partir de R$20,00");
            }
            else
            {
                printf("\nSacando R$%.2f", saque);
                lista->dados[res].saldo -= saque;
            }
        }
        return 1;
    }
}

int inserirCliente(Lista *lista, TCliente cliente)
{
    if (lista->ultimo < lista->capacidade - 1)
    {
        lista->ultimo++;
        lista->dados[lista->ultimo] = cliente;
        return 1;
    }
    else
    {
        return 0;
    }
}

int retirarCliente(Lista *lista, int cpf)
{
    int res = verifica(lista, cpf);
    if (res == -1)
    {
        return -1;
    }
    else
    {
        for (int i = res; i < lista->ultimo - 1; i++)
        {
            lista->dados[i] = lista->dados[i + 1];
        }
        lista->ultimo--;
        return 1;
    }
}
