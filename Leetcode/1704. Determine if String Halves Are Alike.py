class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        v = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        a = []
        b = []
        sum1 = 0
        sum2 = 0
        for i in range(0,len(s)//2):
            a.append(s[i])
        for i in range(len(s)//2,len(s)):
            b.append(s[i])
        for i in range(0,len(v)):
            sum1 = sum1 + a.count(v[i])
            sum2 = sum2 + b.count(v[i])
        if(sum1==sum2):
            return True
        else: 
            return False
                    
                    
                       
                      
                       
        
            