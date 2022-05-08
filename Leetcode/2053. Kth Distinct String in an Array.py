class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        l = []
        s=""
        for i in range(0,len(arr)):
            count=0
            count = arr.count(arr[i])
            if(count==1):
                l.append(arr[i])
        if(len(l)>=k):
            return (l[k-1])
        else:
            return s
        
            
           