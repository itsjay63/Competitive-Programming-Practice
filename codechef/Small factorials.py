#---------------------------------------------------------------------------------------
#-------------------Author : itsjaysuthar ----------------------------------------------
#---------------------------------------------------------------------------------------


task = int(input())
def fact(a):
    if a==1:
        return 1
    elif a <= 0:
        return 0
    else:
        return a * fact(a-1)
f=[]
for i in range(task):
    n = int(input())
    f.append(fact(n))

for i in range(len(f)):
    print(f[i])