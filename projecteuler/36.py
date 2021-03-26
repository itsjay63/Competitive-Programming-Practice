# ---------------------------------------------------------------------------------------
# -------------------Author : itsjaysuthar ----------------------------------------------
# ---------------------------------------------------------------------------------------


def palim(n):
    sumo = 0
    while n > 0:
        j = n % 10
        sumo = sumo * 10 + j
        n = n // 10
    return sumo


def dtob(n):
    return bin(n)[2:]

sumf = 0
i = 1
while i < 1000000:
    if i == palim(i):
        m = dtob(i)
        p = m[::-1]
        if m == p:
            sumf = sumf + i
            print(i,m,p)

    i += 1

print(sumf)
