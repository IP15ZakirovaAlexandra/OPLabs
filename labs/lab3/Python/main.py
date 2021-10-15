def factorial(k):
    n = 1
    i = 1
    while i <= k:
        i = i + 1
        n = n * i
    return n


def chislitel(a, k, x):
    result = 1
    i = 0
    while i <= (k + 1):
        i = i + 1
        result = result * (a - i)
    return result * pow(x, k)


a = int(input('Enter an integer number, a = '))
x = float(input('Enter fractional x from 0 to 1, x = '))
k = 1
Sum: float = 1
finish = False
while (not finish):
    Sum = Sum + chislitel(a, k, x) / factorial(k)
    k = k + 1
    if chislitel(a, k, x) == 0:
        finish = True

print(round(Sum, 5))
