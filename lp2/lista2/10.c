/*
Os bancos atualizam diariamente as contas de seus clientes. Essa atualização
envolve a análise dos depósitos e retiradas de cada conta. Numa conta de
balanço mínimo, uma taxa de serviço é deduzida se a conta cai abaixo de
uma certa quantia especificada. Suponha que uma conta particular comece o
dia com um balanço de R$ 60,00. O balanço mínimo exigido é R$ 30,00 e se o
balanço de fim de dia for menor do que isso, uma taxa é reduzida da conta. A
fim de que essa atualização fosse feita utilizando computador, é fornecido o
seguinte conjunto de dados:

a) a primeira linha contém o valor do balanço mínimo diário, quantidade
de transações e taxa de serviço;
b) as linhas seguintes contém número da conta, valor da transação e
código da transação (depósito ou retirada);
Escrever um programa que:
a) calcule o balanço (saldo/débito) da conta ao fim do dia (se o resultado
for negativo, isto significa insuficiência de fundos na conta);
b) escreva, para cada conta, o seu número e o balanço calculado. Se não
houver fundos, imprima o número da conta e a mensagem “NÃO HÁ
FUNDOS”.
*/

#include <stdio.h>

int main()
{
    system("clear || cls");
    int numeroConta, qtdTransacoes, codigoTransacao;
    float balancoMinimo, taxaServico, transacao, saldo;
    printf("Digite o valor do balanço mínimo diário: R$");
    scanf("%f", &balancoMinimo);
    printf("\nDigite a taxa de serviço (%%): ");
    scanf("%f", &taxaServico);
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    while (1)
    {
        saldo = 0;
        printf("\nDigite o número da conta (negativo para parar): ");
        scanf("%d", &numeroConta);
        if (numeroConta < 0)
            break;
        printf("\nDigite a quantidade de transações: ");
        scanf("%d", &qtdTransacoes);
        for (int i = 0; i < qtdTransacoes; i++)
        {
            printf("\nDigite o código da %d° transação:\n[1] Depósito\n[2] Saque ", i + 1);
            scanf("%d", &codigoTransacao);
            while (1)
            {
                if (codigoTransacao == 1 || codigoTransacao == 2)
                    break;
                printf("Digite somente 1 ou 2\n");
                printf("[1] Depósito\n[2] Saque\n");
                scanf("%d", &codigoTransacao);
            }

            switch (codigoTransacao)
            {
            case (1):
                printf("Digite o valor do depósito: R$");
                scanf("%f", &transacao);
                saldo += transacao;
                break;
            case (2):
                printf("Digite o valor do saque: R$");
                scanf("%f", &transacao);
                saldo -= transacao;
                break;
            default:
                break;
            }
        }

        printf("---------------------------------\n");
        if (saldo < 0)
            printf("Conta n %d\nNÃO HÁ FUNDOS\n");
        else if (saldo > 0 && saldo < 30)
        {
            saldo -= (saldo * (taxaServico / 100));
            printf("Conta n %d\nSaldo: R$%.2f\n", numeroConta, saldo);
        }
        else
            printf("Conta n %d\nSaldo: R$%.2f\n", numeroConta, saldo);
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    }

    return 0;
}
