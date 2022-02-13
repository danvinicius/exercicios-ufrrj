numerosDigitados = []
numerosUnicos = []
continua = True
while continua:
    num = int(input("Digite um número: "))
    if num >= 0 and num <= 100:
        numerosDigitados.append(num)
    elif num > 100:
        print("Digite apenas números entre 0 e 100")
    else:
        continua = False

for numero in numerosDigitados:
    if numero not in numerosUnicos:
        numerosUnicos.append(numero)
for numero in numerosUnicos:
    print(f"Você digitou o número {numero}: {numerosDigitados.count(numero)} vezes")
