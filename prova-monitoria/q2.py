# Questão 2:
# Crie uma função que receba uma string contendo uma frase e retorne uma outra string
# contendo apenas a primeira letra de cada palavra. Se alguma letra vier depois de uma
# marca de pontuação (., ? e !), ela precisará ser convertida para maiúscula. Não será
# permitido a utilização de funções que não sejam nativas da linguagem escolhida, ou seja
# não é permitido o uso de bibliotecas.


def lerString(frase):
    stringResposta = ""
    for index, letra in enumerate(frase):
        if index == 0:
            stringResposta += letra
        else:
            if letra == " ":
                if frase[index - 1] in ".;,?!":
                    stringResposta += frase[index + 1].capitalize()
                else:
                    stringResposta += frase[index + 1]
    return stringResposta


fraseUsuario = input("Digite uma frase: ")
print(f"Resultado: {lerString(fraseUsuario)}")
