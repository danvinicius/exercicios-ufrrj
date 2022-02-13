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
