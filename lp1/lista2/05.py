"""Faça o algorítimo, o fluxograma e o programa para ler as dimensões de uma cozinha
retangular (comprimento, largura e altura), calcular e escrever a quantidade de caixas de
azulejos para se colocar em todas as suas paredes (considere que não será descontada a área
ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 m2
."""

from math import ceil

larg = float(input("Digite a largura da cozinha: "))
comp = float(input("Digite o comprimento da cozinha: "))
alt = float(input("Digite a altura da cozinha: "))
tamanhoAzulejo = 1.5

#considerando chão + 4 paredes
area = (larg * comp) + (larg * alt * 2) + (comp * alt * 2)
totalAzulejos = ceil(area / tamanhoAzulejo)

print(f"Serão necessários {totalAzulejos} azulejos")
