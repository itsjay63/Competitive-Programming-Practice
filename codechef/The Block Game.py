# ---------------------------------------------------------------------------------------
# -------------------Author : itsjaysuthar ----------------------------------------------
# ---------------------------------------------------------------------------------------

def palim(n):
    sum = 0
    while n > 0:
        b = n % 10
        sum = sum * 10 + b
        n = n // 10
    return sum


t = int(input())
i = 0
a = []
if 1 <= t <= 20:
    while i < t:
        num = int(input())
        if 1 <= num <= 20000:
            if num == palim(num):
                a.append("wins")
            else:
                a.append("loses")
            i += 1

    for i in range(len(a)):
        print(a[i])
