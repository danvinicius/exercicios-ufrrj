#include <stdio.h>

int main()
{
    system("clear || cls");
    int idade, grauInstrucao, opiniao, maisVelho, maisNovo, contador, otimo, regular, pessimo, totalMais10Pessimo;
    float mediaIdadeOtimo, percentMais10Pessimo, totalIdadeOtimo;
    contador = totalMais10Pessimo = totalIdadeOtimo = otimo = pessimo = regular = pessimo = 0;

    while (1)
    {
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Digite a idade do %d° espectador: (negativo para parar)\n", contador + 1);
        scanf("%d", &idade);
        if (idade < 0)
            break;

        // verificando idade do mais velho e mais novo
        if (contador == 0)
            maisNovo = maisVelho = idade;
        else
        {
            if (idade > maisVelho)
            {
                maisVelho = idade;
            }
            if (idade < maisNovo)
            {
                maisNovo = idade;
            }
        }

        // grau de instrução
        printf("Digite o grau de instrução, em anos, do %d° espectador: \n", contador + 1);
        scanf("%d", grauInstrucao);

        // opinião sobre o filme
        printf("Digite a opinião do %d° espectador sobre o filme: \n[1] ótimo\n[2] regular\n[3] péssimo\n", contador + 1);
        scanf("%d", &opiniao);
        while (1)
        {
            if (opiniao == 1 || opiniao == 2 || opiniao == 3 || opiniao == 4)
                break;
            printf("Digite somente entre 1 e 4: \n");
            scanf("%d", &opiniao);
        }

        switch (opiniao)
        {
        case (1):
            otimo++;
            totalIdadeOtimo += idade;
            break;
        case (2):
            regular++;
            break;
        case (3):
            pessimo++;
            if (grauInstrucao > 10)
                totalMais10Pessimo++;
            break;
        default:
            break;
        }

        contador++;
    }

    mediaIdadeOtimo = totalIdadeOtimo / otimo;
    percentMais10Pessimo = (float)(totalMais10Pessimo * 100 / contador);
    printf("A média das idades das pessoas que responderam ótimo foi de %.1f\n", mediaIdadeOtimo);
    printf("O espectador mais novo tinha %d anos e o mais velho tinha %d anos\n", maisNovo, maisVelho);
    printf("O percentual de pessoas com mais de 10 anos de instrução que responderam péssimo foi de %.2f%%\n", percentMais10Pessimo);

    return 0;
}