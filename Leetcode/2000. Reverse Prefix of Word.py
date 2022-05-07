class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        l = []
        rev = []
        s= ""
        if(ch in word):
            index = word.index(ch)
            for i in range(0,index+1):
                l.append(word[i])
            l.reverse()
            for i in range(index+1,len(word)):
                l.append(word[i])
            s = s.join(l)
            return s
        else:
            return word