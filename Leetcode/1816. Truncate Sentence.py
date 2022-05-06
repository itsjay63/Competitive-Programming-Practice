class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        l = s.split(" ")
        b = []
        a = " "
        for i in range(0,k):
            b.append(l[i])
        a = a.join(b)
        return a