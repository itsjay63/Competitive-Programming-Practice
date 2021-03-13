#---------------------------------------------------------------------------------------
#-------------------Author : itsjaysuthar ----------------------------------------------
#---------------------------------------------------------------------------------------

t = int(input())
l = []
for i in range(t):
    tem = int(input())
    l.append(tem)
l1 = len(l)

def check(a):
    count = 0
    while a > 0:
        if a % 10 == 4:
            count += 1
        a = a // 10
    return count
if __name__ == '__main__':
    j = 0
    while j < len(l):
        b = l[j]
        print(check(b))
        j += 1

