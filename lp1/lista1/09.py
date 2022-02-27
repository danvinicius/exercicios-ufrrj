"""Solicitar dois números inteiros e mostrar ao usuário o resultado da soma,
subtração do primeiro pelo segundo, da multiplicação e da divisão do primeiro
pelo segundo. Na divisão, caso o segundo valor seja 0, informar que não será
possível a divisão."""

n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))

print(f"{n1}+{n2}={n1+n2}")
print(f"{n1}-{n2}={n1-n2}")
print(f"{n1}*{n2}={n1*n2}")
if n2 == 0:
    print("Não é possível dividir por 0")
else:
    print(f"{n1}/{n2}={n1/n2}")
