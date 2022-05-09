class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        l = []
        s = []
        for i in range(1,n+1):
            l.append(i)
        t = len(target)
        count=0
        for i in range(0,len(l)):
            if(count<t):
                if(l[i] in target):
                    s.append("Push")
                    count= count+1
                elif(l[i] not in target):
                    s.append("Push")
                    s.append("Pop")
        return s
                