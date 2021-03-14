#project euler problem 4
#author : itsjaysuthar
def pelim(n):
    sum = 0
    while n>0:
        i = n%10
        sum = sum *10 +i
        n = n//10
    return sum
a = []
b = []
count = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        a.append(i * j)
        count += 1

for i in range(len(a)):
    if a[i] == pelim(a[i]):
        b.append(a[i])

print(max(b))