# ---------------------------------------------------------------------------------------
# -------------------Author : itsjaysuthar ----------------------------------------------
# ---------------------------------------------------------------------------------------


add=0
f = open("data.txt", "rt") #copy that given data to your project file
for i in range(1,101):
    m=f.readline()
    n=int(m)
    add=add+n
    k=str(add)

print(k[0:10])