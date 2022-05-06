class Solution:
    def countTriples(self, n: int) -> int:
        l = []
        count=0
        for i in range(1,n+1):
            l.append(i*i)
        for i in range(1,n):
            for j in range(i+1,n+1):
                if(i*i + j*j in l):
                    count+=2
        return count;