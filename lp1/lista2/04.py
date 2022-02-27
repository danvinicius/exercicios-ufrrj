"""Faça o algorítimo, o fluxograma e o programa para calcular a temperatura em graus
Fahrenheit, dada a temperatura em graus Celsius.

C/5 =(F-32)/9"""

celsius = float(input("Digite a temperatura em graus Celsius: "))
fahrenheit = ((9 / 5) * celsius) + 32
print(f"{celsius}°C equivalem a {fahrenheit}°F")
