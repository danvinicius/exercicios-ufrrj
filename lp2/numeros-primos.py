continua = True
while continua:
    inicio = input("Base:\t")
    fim = input("Limite:\t")
    try:
        inicio = int(inicio)
        fim = int(fim)
        if inicio > fim or inicio < 10 or fim > 100:
            raise Exception("ERRO")
        R = "\nInicio:%d Fim:%d\tResposta:" % (inicio, fim)
        R1 = " "
        quantidade_primos = 0
        for c in range(inicio, fim + 1):
            quantidade_divisores = 0
            for num in range(1, c + 1):
                if c % num == 0:
                    quantidade_divisores = quantidade_divisores + 1
            if quantidade_divisores == 2:
                R1 = R1 + str(c) + ", "
                quantidade_primos += 1
        print("%s%s\n" % (R, R1))
        if quantidade_primos == 0:
            print("Vazio")
    except Exception as erro:
        print("ERRO")
    resp = str(input("Deeseja veríficar um novo intervalo? (S/N)")).upper()
    if resp == "N":
        continua = False
        print("\nFIM.\n")
