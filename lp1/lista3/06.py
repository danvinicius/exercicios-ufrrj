"""Elabore um algoritmo que dado um número decimal, transforme em um número binário. A
transformação se dá através de divisões sucessivas por 2."""

decimal = int(input("Digite um número em decimal: "))
restos = []
while decimal > 0:
    resto = decimal % 2
    restos.append(resto)
    decimal = decimal // 2

binario = ""
for num in range(len(restos) - 1, -1, -1):
    binario += str(restos[num])

print(binario)
