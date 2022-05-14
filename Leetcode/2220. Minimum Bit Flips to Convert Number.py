class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        count=0
        s = bin(start)[2:]
        g = bin(goal)[2:]
        s1=[]
        g1=[]
        for i in range(len(s)):
            s1.append(s[i])
        for i in range(len(g)):
            g1.append(g[i])
        diff = len(s1)-len(g1)
        if(diff>0):
            g1.reverse()
            while(diff):
                g1.append('0')
                diff=diff-1
            g1.reverse()
        else:
            diff= diff*-1
            s1.reverse()
            while(diff):
                s1.append('0')
                diff=diff-1
            s1.reverse()
        print(s1)
        print(g1)
        for i in range(0,len(s1)):
            if(s1[i] != g1[i]):
                count=count+1
            
        return count
        