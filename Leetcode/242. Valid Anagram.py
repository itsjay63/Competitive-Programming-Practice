class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        ans1=1
        ans2=1
        lists = list(set(s))
        listt = list(set(t))
        for i in lists:
            if(s.count(i) == t.count(i)):
                continue
            else:
                ans1 = 0   
        for i in listt:
            if(s.count(i) == t.count(i)):
                continue
            else:
                ans2 = 0 
        return ans1 and ans2
        
            
        