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
