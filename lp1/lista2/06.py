"""Faça o algorítimo, o fluxograma e o programa para resolver a seguinte situação: Um
motorista de táxi deseja calcular o custo de um dia de trabalho. Sabe-se que o preço da
gasolina é de R$ 2,75, solicite do usuário os seguintes dados: a marcação do odômetro (Km)
no início do dia, a marcação (Km) no final do dia, o número de litros de gasolina gasto e o
valor total (R$) recebido dos passageiros. Calcular e escrever: a média do consumo em
Km/L, o gasto para abastecer o veículo e o lucro (líquido) do dia."""

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
