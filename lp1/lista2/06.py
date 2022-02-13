kmInicial = float(input("Digite a marcação do odômetro no início do dia: "))
kmFinal = float(input("Digite a marcação do odômetro no final do dia: "))
litrosGasolina = float(input("Digite o número de litros de gasolina gastos: "))
valorPassageiros = float(input("Digite o valor total recebido dos pasageiros: "))

kmTotal = kmFinal - kmInicial
precoGasolina = 2.75
mediaConsumo = kmTotal / litrosGasolina
gastoAbast = litrosGasolina * precoGasolina
lucro = valorPassageiros - gastoAbast


print(f"A média do consumo foi de {mediaConsumo}km/L")
print(f"O gasto para abastecer o veículo foi de R${gastoAbast:.2f}")
print(f"Seu lucro foi de R${lucro:.2f}")
