# ---------------------------------------------------------------------------------------
# -------------------Author : itsjaysuthar ----------------------------------------------
# ---------------------------------------------------------------------------------------

import math

def sum(n):
    sum=0
    while(n>0):
        j = n % 10
        sum = sum + j
        n = n // 10
    return sum
a=[]
for i in range(1,100):
    for j in range(1,100):
        a.append(pow(i,j))

b=[]
for i in range(len(a)):
    b.append(sum(a[i]))

print(max(b))

