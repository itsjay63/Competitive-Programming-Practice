class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        l = len(nums)
        a = []
        if(l%2==0):
            
            for i in range(0,l,2):
                while(nums[i]):
                    a.append(nums[i+1])
                    nums[i]=nums[i]-1
        
        print(a)
        return a