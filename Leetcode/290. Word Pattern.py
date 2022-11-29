class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool: 
        lists = s.split(" ")
        if(len(pattern) != len(lists)):
            return False
        ptos={}
        stop={}
        for i,j in zip(pattern,lists):
            if i in ptos and ptos[i] != j:
                return False
            if j in stop and stop[j] != i:
                return False
            ptos[i]=j
            stop[j]=i
        return True
            
       
                
        