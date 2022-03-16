"""
Desenvolver uma rotina, usando a linguagem Python para
informar os números primos contidos em um intervalo fornecido
pelo usuário.
A rotina deve ter a seguinte obrigatoriedade para a correta execução:
1. Como entrada, isto é, dado solicitado ao usuário (input) deve ser solicitado o intervalo
inferior e o superior para processamento.
• O intervalo deve ser de números inteiros, maior ou igual a 10 e menor ou igual a
100.
• A base do intervalo deve ser menor ou igual ao limite:
Exemplo:
• base 10 limite 100 -> válido
• base 10.0 limite 100 -> inválido
• base 9 limite 90 -> inválido
• base 15 limite 10 -> inválido
• base 15 limite 15 -> válido
2. Como resposta (print) a rotina deve informar os números primos contidos no intervalo
solicitado na forma como apresentado no exemplo.
Exemplo:
• base 10 limite 20: 11,13,17,19
• base 11 limite 19: 11,13,17,19
• base 12 limite 12: VAZIO
• base 20 limite 10: ERRO
O termo VAZIO deve ser usado quando não houver número primo contido no intervalor
solicitado.
O termo ERRO deve ser usado quando o valor informado para o intervalor for inválido.
3. A cada término de uma execução a rotina deve perguntar (input) ao usuário se deseja nova
execução. As letras “S” ou “s” indica nova execução, qualquer outra opção deve terminar o
programa.
"""

continua = True
while continua:
    inicio = int(input("Base (min. 10): "))
    fim = int(input("Limite (max. 100): "))
    if inicio > fim or inicio < 10 or fim > 100:
        while inicio > fim or inicio < 10 or fim > 100:
            print(
                "Erro: A base precisa ser maior ou igual a 10 e não pode ser maior que o limite"
            )
            inicio = int(input("Base: "))
            fim = int(input("Limite: "))
    print("\nInicio: %d\nFim: %d" % (inicio, fim))
    resultado = ""
    quantidade_primos = 0
    for c in range(inicio, fim + 1):
        quantidade_divisores = 0
        for num in range(1, c + 1):
            if c % num == 0:
                quantidade_divisores = quantidade_divisores + 1
        if quantidade_divisores == 2:
            resultado = resultado + str(c) + ", "
            quantidade_primos += 1
    print("Resposta: %s\n" % (resultado))
    if quantidade_primos == 0:
        print("Vazio")
    resp = str(input("Deseja verificar um novo intervalo? (S/N)")).upper()
    if resp not in "sS":
        continua = False
        print("\nFIM.\n")
