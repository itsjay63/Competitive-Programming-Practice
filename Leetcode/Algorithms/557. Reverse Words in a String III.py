class Solution:
    def reverseWords(self, s: str) -> str:
        a  = " "
        l = s.split()
        for i in range(0,len(l)):
            l[i] = l[i][::-1]
        a = a.join(l)
        return a