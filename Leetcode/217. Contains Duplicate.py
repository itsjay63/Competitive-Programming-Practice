class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hashlist = set()
        for i in nums:
            if(i in hashlist):
                return True
            hashlist.add(i)
        return False
        
        
                