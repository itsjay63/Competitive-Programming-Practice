# ---------------------------------------------------------------------------------------
# -------------------Author : itsjaysuthar ----------------------------------------------
# ---------------------------------------------------------------------------------------
import math

def isprimen(n):
    for i in range(2, n - 1):
        if n % i == 0:
            return 0

    return 1
# will give correct answer but optimization needed
arr = []
arrc = []
for i in range(2, 100):
    arr.append(i)
for i in range(2, 100):
    arrc.append(0)


for i in range(2, len(arr)):
    if isprimen(i) == 1:
        arr[i] = i
    else:
        arr[i] = 0

j = 2
while j < 10:
    a = 0
    count = 0
    sum = 0
    for i in range(j, len(arr)):
        if arr[i] != 0:
            count += 1
            sum = sum + arr[i]

        if isprimen(sum) == 1:
            if sum > a and sum < 100:
                a = sum
                if a in arr:
                    x=arr.index(a)
                    if arrc[x]<count:
                        arrc[x]=count

    sum=sum-j
    j += 1

c=(max(arrc))
i=arrc.index(c)
print(i," ",c)





