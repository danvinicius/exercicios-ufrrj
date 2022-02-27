"""Solicitar vários valores inteiros e apos o usuário digitar qualquer valor
negativo, o programa deverá mostrar o maior e o menor valor digitado."""
continua = True
numeros = []
while continua == True:
    n = int(input("Digite um valor: "))
    if n < 0:
        continua = False
    else:
        numeros.append(n)

for i in range(0, len(numeros)):
    if i == 0:
        maior = numeros[i]
        menor = numeros[i]
    else:
        if numeros[i] > maior:
            maior = numeros[i]
        elif numeros[i] < menor:
            menor = numeros[i]

print(f"O maior é o {maior} e o menor é o {menor}")
