"""Solicitar dois números inteiros e mostrar ao usuário o resultado da soma,
subtração do maior pelo menor, da multiplicação e da divisão do maior pelo
menor. Na divisão, caso o segundo valor seja 0, informar que não será possível a
divisão."""
n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))

if n1 >= n2:
    maior = n1
    menor = n2
elif n2 > n1:
    maior = n2
    menor = n1

print(f"{maior}+{menor}={maior+menor}")
print(f"{maior}-{menor}={maior-menor}")
print(f"{maior}*{menor}={maior*menor}")
if menor == 0:
    print("Não é possível dividir por 0")
else:
    print(f"{maior}/{menor}={maior/menor}")
