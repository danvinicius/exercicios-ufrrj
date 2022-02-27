"""Elabore um algoritmo que criptografe uma dada cadeia de caracteres fornecida pelo usuário. Além
da cadeia de caracteres, o usuário deverá fornecer o saldo que ele quer dar na criptografia. Todo
caractere maiúsculo deverá ser transformado em minúsculo antes da criptografia.
Exemplo:
cadeia caracteres alfabeto ← “abcdefghijklmnopqrstuwvxyz”
cadeia frase ← “teste de criptografia zebra”
salto ← 2
cadeia criptografada ← “wguwg fg etkrwqitchkc bgdtc”"""

alfabeto = "abcdefghijklmnopqrstuvwxyz"

frase = input("Digite uma frase: ")
salto = int(input("Digite o salto: "))

novaFrase = ""

for i in range(len(frase)):
    if frase[i] == " ":
        novaFrase = novaFrase + " "
    for j in range(len(alfabeto) - 1):
        if frase[i] == alfabeto[j]:
            novaFrase = novaFrase + alfabeto[j + salto]

print(novaFrase)
