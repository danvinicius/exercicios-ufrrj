n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))

if n1 < n2:
    print(f"{n1} é o menor")
elif n2 < n1:
    print(f"{n2} é o menor")
else:
    print(f"Os números são iguais")