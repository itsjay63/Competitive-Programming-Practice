# ---------------------------------------------------------------------------------------
# -------------------Author : itsjaysuthar ----------------------------------------------
# ---------------------------------------------------------------------------------------
import math
def facto(l):
    if(l==0 or l==1):
        return 1
    else:
        return l*facto(l-1)

def isnum(n):
    sum=0
    while n>0:
        j=n%10
        j=facto(j)
        sum=sum+j
        n=n//10

    return sum
m=0
for i in range(3,100000):
    k=isnum(i)
    if(i==k):
        m=m+k

print(m)