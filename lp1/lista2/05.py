from math import ceil

larg = float(input("Digite a largura da cozinha: "))
comp = float(input("Digite o comprimento da cozinha: "))
alt = float(input("Digite a altura da cozinha: "))
tamanhoAzulejo = 1.5

area = (larg * comp * 2) + (larg * alt * 2) + (comp * alt * 2)
totalAzulejos = ceil(area / tamanhoAzulejo)

print(f"Serão necessários {totalAzulejos} azulejos")
