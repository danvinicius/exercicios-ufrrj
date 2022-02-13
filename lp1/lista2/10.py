def toUpper(nome):
    diff = ord("a") - ord("A")
    if ord(nome[0]) >= 97 and ord(nome[0]) <= 122:
        asciiPrimeiraLetra = ord(nome[0])
        nome = chr(asciiPrimeiraLetra - diff) + nome[1:]

    for contador in range(0, len(nome)):
        if nome[contador] == " ":
            if ord(nome[contador + 1]) >= 97 and ord(nome[contador + 1]) <= 122:
                asciiPrimeiraLetra = ord(nome[contador + 1])
                nome = (
                    nome[: contador + 1]
                    + chr(asciiPrimeiraLetra - diff)
                    + nome[contador + 2 :]
                )
    return nome

print(toUpper("daniel vinicius"))
