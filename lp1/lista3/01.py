continua = True
while continua:
    a = int(input("Digite o valor de a: "))
    while a < 0:
        print("O a não pode ser negativo")
        a = int(input("Digite o valor de a: "))
    b = int(input("Digite o valor de b: "))
    c = int(input("Digite o valor de c: "))
    delta = b ** 2 - 4 * a * c
    if delta < 0:
        print("Não possui raízes reais")
    r1 = (-b + delta ** 0.5) / 2 * a
    r2 = (-b - delta ** 0.5) / 2 * a
    print(f"As raízes são {r1} e {r2}")
    resp = input("Deseja calcular novas raízes? ")
    if resp not in "Ss":
        continua = False
