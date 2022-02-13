qtdMacas = int(input("Quantas maçãs foram compradas? "))
if qtdMacas < 12:
    precoMacas = 0.45
else:
    precoMacas = 0.36
custo = qtdMacas * precoMacas
print(f"O custo da compra foi de R${custo:.2f}")
