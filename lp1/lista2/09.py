"""Faça o algorítimo, o fluxograma e o programa para calcular a frequência dos números
digitados pelo usuário. A faixa de valores possíveis é de 1 até 100, e o programa termina
quando o usuário digita um valor negativo. Valores fora da faixa serão ignorados."""

numerosDigitados = []
numerosUnicos = []
continua = True
while continua:
    num = int(input("Digite um número: "))
    if num >= 1 and num <= 100:
        numerosDigitados.append(num)
    elif num > 100:
        print("Digite apenas números entre 1 e 100")
    else:
        continua = False

for numero in numerosDigitados:
    if numero not in numerosUnicos:
        numerosUnicos.append(numero)
for numero in numerosUnicos:
    print(f"Você digitou o número {numero}: {numerosDigitados.count(numero)} vezes")
