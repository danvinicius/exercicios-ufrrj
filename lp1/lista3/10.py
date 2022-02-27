"""Elabore um algoritmo que realizar o pedido de uma lanchonete, o usuário deverá digitar o código e
a quantidade. Enquanto o código for um número positivo, o programa deverá continuar solicitando o
código para um novo item. Quando o usuário digitar um número negativo no código do produto, o
programa deverá mostrar a lista de pedidos com o total a ser pago. A tabela abaixo tem os códigos ,
nome do produto e o valor.

Código   Descrição      Valor (R$)
100      Misto quente    4,50
101      Refrigerante    5,00
102      Pão de queijo   2,00
103      Suco            6,00
"""

codigo = 1
produtos = []
somaValores = 0
while codigo > 0:
    codigo = int(input("Digite o código do produto: "))
    if codigo == 100:
        produtos.append("Misto quente")
        temp = 4.5
    elif codigo == 101:
        produtos.append("Refrigerante")
        temp = 5
    elif codigo == 102:
        produtos.append("Pão de queijo")
        temp = 2
    elif codigo == 103:
        produtos.append("Suco")
        temp = 6
    if codigo > 0:
        qtd = int(input("Digite a quantidade do produto: "))
        somaValores += qtd * temp
print("Você comprou", produtos, " e o total foi de ", somaValores)
