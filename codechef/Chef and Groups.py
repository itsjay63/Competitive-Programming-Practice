#---------------------------------------------------------------------------------------
#-------------------Author : itsjaysuthar ----------------------------------------------
#---------------------------------------------------------------------------------------

t = int(input())
l = []
gup=[]
for i in range(t):
    l.append(input())

for i in range(0, len(l)):
    g=0
    for j in range(0, len(l[i])):
        if j == 0:
            if l[i][j] == '1':
                g += 1
            else:
                g += 0
        else:
            if l[i][j] == '1':
                if l[i][j - 1] == '0':
                    g += 1
                else:
                    g += 0
            if l[i][j] == '0':
                if l[i][j - 1] == '0':
                    g += 0
                else:
                    g += 0
    gup.append(g)
for i in range(len(gup)):
    print(gup[i])

