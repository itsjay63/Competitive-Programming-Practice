class Solution:
    def sortSentence(self, s: str) -> str:
        l = s.split(" ")
        b = []
        b2 = " "
        ans ={}
        for i in range(0,len(l)):
            r = l[i][-1]
            c = int(r)
            ans[c] = l[i][:-1:]
           
        for i in range(1,len(ans)+1):
            b.append(ans.get(i))
            
        b2 = b2.join(b)   
        return b2
        