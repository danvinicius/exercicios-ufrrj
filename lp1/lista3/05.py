alfabeto = "abcdefghijklmnopqrstuvwxyz"

frase = input("Digite uma frase: ")
salto = int(input("Digite o salto: "))

novaFrase = ""

for i in range(len(frase) - 1):
    if frase[i] == " ":
        novaFrase = novaFrase + " "
    for j in range(len(alfabeto) - 1):
        if frase[i] == alfabeto[j]:
            novaFrase = novaFrase + alfabeto[j + salto]

print(novaFrase)
