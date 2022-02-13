# solução 1
# def fatorial(n):
#     if n == 1:
#         return 1
#     else:
#         return n * fatorial(n - 1)

# num = int(input("Digite um número: "))
# print(fatorial(num))

# solução 2
num = int(input("Digite um número: "))
fatorial = 1
for i in list(range(1, num + 1))[::-1]:
    fatorial *= i
print(f"O fatorial é {fatorial}")
