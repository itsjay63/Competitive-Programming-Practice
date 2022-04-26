class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        a = []
        a.append(first)
        l = len(encoded)
       
        for i in range(l):
            a.append(a[i] ^ encoded[i])
        
        
        return a