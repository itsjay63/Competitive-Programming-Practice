# ---------------------------------------------------------------------------------------
# -------------------Author : itsjaysuthar ----------------------------------------------
# ---------------------------------------------------------------------------------------
import math

def digit(n):
    sum=0
    i=1
    while(i<11):
        j=n%10
        sum=sum*10 +j
        n=n//10
        i+=1
    return sum


sum=0
for i in range(1,1001):
    sum=sum+pow(i,i)
k=digit(sum)
m=digit(k)
print(m)