from math import factorial

n = int(input('Enter an integer number n > 0, n = '))
x = int(input('Enter an integer number, x = '))
k: int = 0
for k in range(0, n):
    k = k + 1
    print(pow(x, k), "/", factorial(2 * k), "\n")
