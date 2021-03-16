#---------------------------------------------------------------------------------------
#-------------------Author : itsjaysuthar ----------------------------------------------
#---------------------------------------------------------------------------------------

t = int(input())
i = 0
a=[]
if 1 <= t <= 1000:
    while i < t:
        n = input()
        if n == 'b' or n == 'B':
            a.append("BattleShip")
        if n == 'c' or n == 'C':
            a.append("Cruiser")
        if n == 'd' or n == 'D':
            a.append("Destroyer")
        if n == 'f' or n == 'F':
            a.append("Frigate")

        i += 1

    for i in range(len(a)):
        print(a[i])
