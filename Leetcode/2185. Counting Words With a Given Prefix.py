class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        lp = len(pref)
        l = []
        count=0
        for i in range(0,len(words)):
            l.append(words[i][:lp])
        for i in range(0,len(l)):
            if(pref==l[i]):
                count=count+1
        return count