class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        l = []
        a=""
        for i in range(0,len(words)):
            if(words[i]== words[i][::-1]):
                l.append(words[i])
        if(len(l)!=0):
            a = l[0]
        return a
                