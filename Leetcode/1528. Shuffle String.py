class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        l = len(indices)
        m = len(s)
        if(l==m):
            a = {}
            i = 0
            k = ""
            while(l):
                a[indices[i]] = s[i]
                l=l-1
                i = i+1
            a = sorted(a.items())
            l = len(indices)
            for i in range(0,l):
                k = k + a[i][1]
    
            return k
       
       
        