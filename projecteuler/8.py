# ---------------------------------------------------------------------------------------
# -------------------Author : itsjaysuthar ----------------------------------------------
# ---------------------------------------------------------------------------------------


a=[]
f = open("data.txt", "rt") #copy that given data to your project file
for i in range(1,21):
    m=f.readline()
    m=m[::-1]
    m=int(m)
    for i in range(1,51):
        j=m%10
        a.append(j)
        m=m//10
mul=1
m=[]
for i in range(1,988):
    for j in range(i,i+13):
        mul=mul*a[j]
    m.append(mul)
    mul=1

print(max(m))