class Solution:
    def calPoints(self, ops: List[str]) -> int:
        l = []
        for i in range(0,len(ops)):
            if(ops[i] != "+" and ops[i] != "D" and ops[i] != "C"):
                l.append(int(ops[i]))
            elif(ops[i]=="C"):
                l.pop()
            elif(ops[i]=="D"):
                l.append(int(l[-1]) * 2)
            elif(ops[i]=="+"):
                l.append(int(l[-1]) + int(l[-2]))
        sum = 0  
        for i in range(0,len(l)):
            sum = sum + l[i]
        return sum
            