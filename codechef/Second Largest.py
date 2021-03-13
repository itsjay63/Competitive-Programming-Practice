#---------------------------------------------------------------------------------------
#-------------------Author : itsjaysuthar ----------------------------------------------
#---------------------------------------------------------------------------------------

t = int(input())
l = []
for i in range(t):
    l.append([int(x) for x in input().split()])
i = 0

while i < len(l):
    j = 0
    if j < len(l[i]):
        d=[]
        while j < len(l[i]):
            num = l[i][j]
            d.append(num)
            d.sort()
            j = j + 1
        print(d[1])
    else:
        del d
    i += 1
