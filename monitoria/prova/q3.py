# Questão 3:
# Crie uma função que identifique um número perfeito, dentro de um intervalo entre 0 e um
# valor recebido como parâmetro dessa função. Um número perfeito é um número natural
# onde a soma dos seus divisores naturais (excluindo-se o próprio número) é igual ao
# número original. Por exemplo, o número 6 é um número natural, pois 1 + 2 + 3 é igual a 6.
def identificaNumerosPerfeitos(intervalo):
    for numero in range(1, intervalo + 1):
        total = 0
        for i in range(1, numero):
            if numero % i == 0:
                total += i
        if total == numero:
            print(f"{numero} é perfeito")


intervalo = int(input("Até que número você deseja saber os números perfeitos? "))
identificaNumerosPerfeitos(intervalo)
