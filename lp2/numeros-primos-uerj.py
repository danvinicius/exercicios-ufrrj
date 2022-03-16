continua = True
while continua:
    inicio = int(input("Base (min. 10): "))
    fim = int(input("Limite (max. 100): "))
    if inicio > fim or inicio < 10 or fim > 100:
        while inicio > fim or inicio < 10 or fim > 100:
            print(
                "A base precisa ser maior ou igual a 10 e não pode ser maior que o limite"
            )
            inicio = int(input("Base: "))
            fim = int(input("Limite: "))
    print("\nInicio: %d\nFim: %d" % (inicio, fim))
    resultado = ""
    quantidade_primos = 0
    for c in range(inicio, fim + 1):
        quantidade_divisores = 0
        for num in range(1, c + 1):
            if c % num == 0:
                quantidade_divisores = quantidade_divisores + 1
        if quantidade_divisores == 2:
            resultado = resultado + str(c) + ", "
            quantidade_primos += 1
    print("Resposta: %s\n" % (resultado))
    if quantidade_primos == 0:
        print("Vazio")
    resp = str(input("Deseja verificar um novo intervalo? (S/N)")).upper()
    if resp not in "sS":
        continua = False
        print("\nFIM.\n")
