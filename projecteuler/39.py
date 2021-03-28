# ---------------------------------------------------------------------------------------
# -------------------Author : itsjaysuthar ----------------------------------------------
# ---------------------------------------------------------------------------------------
import math

def persq(n):
    j = 0
    j = pow(n, 2)
    j = int(math.sqrt(j))
    return j

a = []
for i in range(1, 1000):
    for j in range(1, 1000):
        c = pow(i, 2) + pow(j, 2)
        c = (math.sqrt(c))
        if c == persq(c):
            if i + j + c <=1000:
                a.append(i + j + c)
b = []
u=set(a)
u=list(u)

for k in range(0, len(u)):
    count = 0
    for l in range(0, len(a)):
        if u[k] == a[l]:
            count += 1
    b.append(count)

print(u[b.index(max(b))] , max(b))