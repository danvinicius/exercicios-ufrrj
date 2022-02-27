"""Elabore um algoritmo que dado um valor binário, transforme para a representação decimal."""

binario = input("Digite um número em binário: ")
binarioArray = []
for algarismo in binario:
    binarioArray.append(int(algarismo))

potencia = len(binarioArray) - 1

decimal = 0
for num in binarioArray:
    print(f"{num}*{2**potencia} = {num * (2 ** potencia)}")
    num = num * (2 ** potencia)
    decimal += num
    potencia -= 1

print(decimal)
