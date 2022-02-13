n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))

if n1 >= n2:
    maior = n1
    menor = n2
elif n2 > n1:
    maior = n2
    menor = n1

for i in range(menor + 1, maior):
    print(i)
