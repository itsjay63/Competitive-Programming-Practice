class Solution:
    def hammingWeight(self, n: int) -> int:
        total=0
        while(n):
            total = total + n%2
            n = n>>1
        return total
            
        