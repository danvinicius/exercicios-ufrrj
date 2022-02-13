continua = True
numeros = []
somatorio = 0
while continua == True:
    n = int(input("Digite um valor: "))
    if n < 0:
        continua = False
    else:
        numeros.append(n)

for num in numeros:
    somatorio += num

print(f"A soma é {somatorio}")
