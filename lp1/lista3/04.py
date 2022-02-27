"""Elabore um algoritmo para calcular a média de consumo de um automóvel. O programa deve receber
o total de quilômetros percorridos e o total abastecido e então calcular a média de consumo. Enquanto o
usuário não digitar o total de quilômetros negativo o programa continua solicitando os dados para o
usuário."""

continua = True
while continua:
    totalKm = float(input("Digite o total de quilômetros percorridos: "))
    if totalKm < 0:
        continua = False
    else:
        totalAbast = float(input("Digite o total abastecido em litros: "))
        mediaConsumo = totalKm / totalAbast
        print("A média de consumo foi de {:.2f}km/L".format(mediaConsumo))
        print("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=")
