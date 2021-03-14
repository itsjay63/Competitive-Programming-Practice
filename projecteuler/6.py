#project euler problem 6
#author : itsjaysuthar

def sq(n):
    return n * n


sum1 = 0
sum2 = 0
for i in range(1, 101):
    sum2 = sum2 + sq(i)

for i in range(1, 101):
    sum1 = sum1 + i

print(sq(sum1) - sum2)
