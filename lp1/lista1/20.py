"""Solicitar do usuário o nome e 4 notas de uma aluno, calcule a média final e
mostre a situação do aluno está aprovado ou não, sabendo que a média limite
para reprovação é 6,0."""
nome = input("Digite o nome do aluno: ")

nota1 = float(input(f"Digite a primeira nota de {nome}: "))
nota2 = float(input(f"Digite a segunda nota de {nome}: "))
nota3 = float(input(f"Digite a terceira nota de {nome}: "))
nota4 = float(input(f"Digite a quarta nota de {nome}: "))

media = (nota1 + nota2 + nota3 + nota4) / 4
if media >= 6:
    situacao = "aprovado(a)"
else:
    situacao = "reprovado(a)"
    aprovado = False
print(f"A media de {nome} é {media:.1f} e ele(a) está {situacao}")
