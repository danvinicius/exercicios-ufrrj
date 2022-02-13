salario = float(input("Digite o salário do funcionário: R$"))

if salario <= 2000:
    salario += salario * 0.5
elif salario > 2000 and salario <= 5000:
    salario += salario * 0.4
elif salario > 5000 and salario <= 57000:
    salario += salario * 0.2
else:
    salario += salario * 0.1

print(f"O salário foi reajustado para R${salario:.2f}")
