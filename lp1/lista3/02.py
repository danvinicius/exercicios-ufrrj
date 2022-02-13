altura = int(input("Digite a altura da árvore: "))
while altura < 6 or  altura > 24:
    print("A altura deve ser de no mínimo 6 e no máximo 24 linhas")
    altura = input("Digite a altura da árvore: ")

caractere = input("Digite o caractere para montar a árvore: ")

for i in range(0, altura):
    if i == 0:
        print(caractere)
    else:
        print(caractere*(1+2**(i)))
        
