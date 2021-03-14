#project euler problem 20
#author : itsjaysuthar

def fact(n):
    if n == 1:
        return 1
    else:
        return n * fact(n - 1)


def csum(m):
    sum = 0
    while m > 0:
        i = m % 10
        sum = sum + i
        m = m // 10
    return sum


print(csum(fact(100)))
