/*
Escreva um programa que informe a quantidade total de calorias de uma
refeição, a partir da escolha dos itens do cardápio, que consta de um prato
principal, uma bebida e uma sobremesa, segundo a tabela abaixo:

PRATO PRINCIPAL          BEBIDA                          SOBREMESA
1-Vegetariano: 180 cals  1 - Chá (lata): 80 cals         1 - Abacaxi: 75 cals
2-Peixe: 230 cals        2 - Suco de laranja: 150 cals   2 - Sorvete diet: 110 cals
3-Frango: 250 cals       3-  Suco de melão: 70 cals      3 - Mousse diet: 60 cals
4–Carne: 350 cals        4 - Refrigentante diet: 2 cals  4 - Mousse chocolate: 250 cals
*/

#include <stdio.h>

int main()
{
    system("clear || cls");
    int pratoPrincipal, bebida, sobremesa, totalCalorias;

    while (1)
    {
        totalCalorias = 0;
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Escolha o prato principal da sua refeição: \n");
        printf("[1] Vegetariano\n[2] Peixe\n[3] Frango\n[4] Carne\n");
        scanf("%d", &pratoPrincipal);
        if (pratoPrincipal > 4 || pratoPrincipal < 1)
        {
            printf("Digite apenas entre 1 e 4\n");
            continue;
        }
        printf("Escolha sua bebida: \n");
        printf("[1] Chá\n[2] Suco de laranja\n[3] Suco de melão\n[4] Refrigerante diet\n");
        scanf("%d", &bebida);
        if (bebida > 4 || bebida < 1)
        {
            printf("Digite apenas entre 1 e 4\n");
            continue;
        }

        printf("Escolha sua sobremesa: \n");
        printf("[1] Abacaxi\n[2] Sorvete diet\n[3] Mousse diet\n[4] Mousse de chocolate\n");
        scanf("%d", &sobremesa);
        if (sobremesa > 4 || sobremesa < 1)
        {
            printf("Digite apenas entre 1 e 4\n");
            continue;
        }
        break;
    }
    switch (pratoPrincipal)
    {
    case (1):
        totalCalorias += 180;
        break;
    case (2):
        totalCalorias += 230;
        break;
    case (3):
        totalCalorias += 250;
        break;
    case (4):
        totalCalorias += 350;
        break;
    default:
        break;
    }
    switch (bebida)
    {
    case (1):
        totalCalorias += 80;
        break;
    case (2):
        totalCalorias += 150;
        break;
    case (3):
        totalCalorias += 70;
        break;
    case (4):
        totalCalorias += 2;
        break;
    default:
        break;
    }
    switch (sobremesa)
    {
    case (1):
        totalCalorias += 75;
        break;
    case (2):
        totalCalorias += 110;
        break;
    case (3):
        totalCalorias += 60;
        break;
    case (4):
        totalCalorias += 250;
        break;
    default:
        break;
    }

    printf("Sua refeição tem um total de %d calorias", totalCalorias);

    return 0;
}