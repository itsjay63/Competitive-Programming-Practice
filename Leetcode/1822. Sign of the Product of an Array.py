class Solution:
    def arraySign(self, nums: List[int]) -> int:
        p = 1
        ans = 0
        for i in range(0,len(nums)):
            p = p * nums[i]
        if(p>0):
            return 1
        elif(p<0):
            return -1
        elif(p==0):
            return 0
        