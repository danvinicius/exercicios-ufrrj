# Questão 1:
# Escreva um programa que implemente o menu de opções abaixo na função principal do
# programa, utilizando uma nova função para cada item pedido, conforme definido a seguir:
# 1 – Ler os elementos de uma matriz 5x5 de inteiros;
# 2 – Imprimir o valor do maior elemento de uma linha, escolhida pelo usuário;
# 3 – Imprimir o valor da média dos elementos da matriz;
# 4 – FIM.


def main():
    matriz = [[], [], [], [], []]

    def lerElementosMatriz(matriz):
        print("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=")
        print("Entre com os valores da matriz 5x5: ")
        for i in range(0, 5):
            for j in range(0, 5):
                item = int(
                    input(f"Digite o valor inteiro da posição {i+1}x{j+1} da matriz: ")
                )
                matriz[i].append(item)
        for i in matriz:
            print(i)

    def maiorValorLinha(matriz):
        linha = int(
            input("Qual linha você deseja saber o maior valor? [1, 2, 3, 4 ou 5]")
        )
        maior = menor = 0
        for index, item in enumerate(matriz[linha - 1]):
            if index == 0:
                maior = menor = item
            else:
                if item > maior:
                    maior = item
                if item < menor:
                    menor = item
        print("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=")
        print(f"O maior número dessa linha é {maior} e o menor é {menor}")
        print("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=")

    def mostraMedia(matriz):
        total = 0
        for linha in matriz:
            for j in linha:
                total += j
        media = total / 25
        print("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=")
        print(f"A média dos elementos da matriz é {media}")
        print("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=")

    lerElementosMatriz(matriz)
    while True:
        escolha = int(
            input(
                "Qual opção você deseja executar? \n"
                + "[1] Ler os números da matriz novamente\n"
                + "[2] Ver o maior elemento de uma linha da matriz\n"
                + "[3] Ver a média dos itens da matriz\n"
                + "[4] Sair"
            )
        )
        if escolha == 4:
            break
        elif escolha == 1:
            matriz = [[], [], [], [], []]
            lerElementosMatriz(matriz)
        elif escolha == 2:
            maiorValorLinha(matriz)
        elif escolha == 3:
            mostraMedia(matriz)


main()
