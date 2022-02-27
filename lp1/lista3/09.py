"""Elabore um algoritmo para que seja possível dar um reajuste aos funcionários de uma empresa de
acordo com a tabela abaixo:

Faixa  Salário(R$)   Reajuste
1      <= 2.000,00   50%
2      <= 5.000.00   40%
3      <= 7.000,00   20%
4      > 7.000,00    10%

"""

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
