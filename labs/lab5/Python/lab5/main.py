n = int(input('Enter the upper limit :'))
mersen = 1
p = 1
while mersen < n:
    isPrime: bool = True
    for i in range(2, p):
        if p % i == 0:
            isPrime = False
            i = i + 1
            break
    if isPrime:
        mersen = pow(2, p) - 1
        if mersen < n:
            print(' ', mersen)
    p = p + 1
