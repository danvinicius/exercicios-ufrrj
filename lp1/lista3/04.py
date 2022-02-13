continua = True
while continua:
    totalKm = float(input("Digite o total de quilômetros percorridos: "))
    if totalKm < 0:
        continua = False
    else:
        totalAbast = float(input("Digite o total abastecido em litros: "))
        mediaConsumo = totalKm / totalAbast
        print(f"A média de consumo foi de {mediaConsumo}km/L")
        print("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=")