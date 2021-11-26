import math


def exp(x, E):
    xxx: float = 1
    factorial: float = 1
    result: float = 1
    res0: float = 0
    finish = False
    i = 1
    while not finish:
        result += xxx / factorial
        xxx *= x
        factorial *= i
        if abs(result - res0) < E:
            finish = True
        res0 = result
        i = i + 1

    return result


x = int(input('Create an integer: '))
E = float(input('Please, set the accuracy: '))
print('e^',x, ' = ', exp(x, E))
if x > 0:
    x: float = math.atan(x)
    print('y = ', exp(x, E))
else:
    x: float = pow(x, 2)
    print('y = ', exp(x, E) + 1)
