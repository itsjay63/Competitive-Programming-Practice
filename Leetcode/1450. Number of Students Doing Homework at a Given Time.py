class Solution:
    def busyStudent(self, startTime: List[int], endTime: List[int], queryTime: int) -> int:
        sum = 0
        l = len(startTime)
        for i in range(0,l):
            a = []
            for j in range(startTime[i],endTime[i]+1):
                a.append(j)
            if(queryTime in a):
                sum = sum + 1
        return sum
                
            