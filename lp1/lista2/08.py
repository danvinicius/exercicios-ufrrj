altura = float(input("Digite sua altura: "))
sexo = input("Digite seu sexo (F/M): ")
while sexo not in "fFmM":
    sexo = input("Por favor, digite apenas F ou M para o sexo: ")
if sexo in "fF":
    pesoIdeal = (62.1 * altura) - 44.7
elif sexo in "mM":
    pesoIdeal = (72.7 * altura) - 58
print(f"Seu peso ideal é de {pesoIdeal:.1f}Kg")
