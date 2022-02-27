"""Solicitar um valor entre 1 e 10 e montar a tabuada deste número. A tabuada
é formada pelos valores de 0 a 9 multiplicado pelo valor informado."""
num = int(input("Digite um número entre 1 e 10: "))
while num < 1 or num > 10:
    print("O número precisa ser entre 1 e 10")
    num = int(input("Digite um número entre 1 e 10: "))

for i in range(0, 10):
    print(f"{num} x {i} = {num * i}")
