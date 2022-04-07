#include <stdio.h>
typedef struct
{
    int dia, mes, ano;
} date_struct;

date_struct *inicializa(int dia, int mes, int ano)
{
    date_struct *data;
    data = (date_struct *)malloc(sizeof(data));
    data->dia = dia;
    data->mes = mes;
    data->ano = ano;
    return data;
}

void valida(date_struct data)
{
    if (data.dia < 1 || data.dia > 31)
    {
        printf("Dia do mês inválido\n");
    }
    if (data.mes < 1 || data.mes > 12)
    {
        printf("Mês inválido\n");
    }
    if (data.ano > 2022)
    {
        printf("Ano inválido\n");
    }
    else
    {
        imprime(data);
    }
}

void imprime(date_struct data) // chamo dentro de valida
{
    printf("%d/%d/%d", data.dia, data.mes, data.ano);
}

int main()
{
    date_struct *data_qualquer;
    int dia, mes, ano;
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    data_qualquer = inicializa(dia, mes, ano);
    valida(*data_qualquer);

    return 0;
}
