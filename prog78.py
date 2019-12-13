def print1(n):
    x = 0
    while (n != 0):
        x = x + int(n % 10)
        n = int(n/10)
    return x

n = 687
print(print1(n))
