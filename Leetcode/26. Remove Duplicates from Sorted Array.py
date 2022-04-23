class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l = len(nums)
        s = list(set(nums))
        s.sort()
        slen = len(s)
        for i in range(slen):
            nums[i]=s[i]
            
        return slen
            