class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        hashlist = list(set(nums))
        for i in hashlist:
            if(nums.count(i) == 1):
                return i
            else:
                continue
        
        