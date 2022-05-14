class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        l1 = []
        l2 = []
        l3 = []
        for i in range(0,len(nums)):
            if(nums[i]<pivot):
                l1.append(nums[i])
            elif(nums[i]==pivot):
                l2.append(nums[i])
            elif(nums[i]>pivot):
                l3.append(nums[i])
        
        l2.extend(l3)
        l1.extend(l2)
        return l1