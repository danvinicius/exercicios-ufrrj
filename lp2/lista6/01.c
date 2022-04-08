/*
Escreva um programa que cria um tipo de registro (usando typedef) que define uma
data, formada pelos campos DIA, MÊS e ANO. Escreva também as funções:
• INICIALIZA, que recebe valores de dia, mês e ano, além de um registro do tipo
data, passado por referência e atribui esses valores aos campos do registro;
• VALIDA, que recebe o registro data, passado por valor, e verifica se os valores
de dia, mês e ano do registro são válidos; e
• IMPRIME, que recebe o registro data, passado por valor, e imprime seus campos.
Dentro da função main, declare uma variável do tipo data e chame cada uma das funções
descritas acima.
*/

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
