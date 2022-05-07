class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        if((n>=1 and n<=1000) and(start>=0 and start<=1000)):
            a = []
            for i in range(0,n):
                a.append(start + 2 * i)
            if(n==len(a)):
                ans = 0
                for i in range(0,n):
                    ans = 0 ^ a[i] ^ ans
        
                return ans
                
            
            
        
            
        
            
            
            