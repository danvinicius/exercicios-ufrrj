"""Faça o algorítimo, o fluxograma e o programa para calcular a distância entre dois pontos do
plano XY."""
xa = int(input("Digite o valor de xa: "))
xb = int(input("Digite o valor de xb: "))
ya = int(input("Digite o valor de ya: "))
yb = int(input("Digite o valor de yb: "))
distancia = ((xa - xb) ** 2 + (ya - yb) ** 2) ** (1 / 2)
print(f"A distância entre os pontos ({xa}, {ya}) e ({xb}, {yb}) é {distancia:.2f}")
