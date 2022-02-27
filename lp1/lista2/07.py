"""Faça o algorítimo, o fluxograma e o programa para calcular o custo da compra de maçãs,
sabendo-se que elas custam R$ 0,45 cada se forem compradas menos do que uma dúzia, e
R$ 0,36 se forem compradas pelo menos doze."""

qtdMacas = int(input("Quantas maçãs foram compradas? "))
if qtdMacas < 12:
    precoMacas = 0.45
else:
    precoMacas = 0.36
custo = qtdMacas * precoMacas
print(f"O custo da compra foi de R${custo:.2f}")
