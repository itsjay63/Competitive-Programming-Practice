#---------------------------------------------------------------------------------------
#-------------------Author : itsjaysuthar ----------------------------------------------
#---------------------------------------------------------------------------------------

n, h, x = [int(i) for i in input().split()]
t = [int(i) for i in input().split()]
l = []
for i in range(n):
    sum = x + t[i]
    if sum == h:
        f = 1
        l.append(f)
    else:
        f = 0
        l.append(f)

if 1 in l:
    print("yes")
else:
    print("No")
    
