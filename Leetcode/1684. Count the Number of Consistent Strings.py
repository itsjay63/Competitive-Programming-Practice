class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        l = []
        j = []
        count=0
        for i in range(0,len(allowed)):
            l.append(allowed[i])
        for j in range(0,len(words)):
            sum = 0;
            for k in range(0,len(words[j])):
                if(words[j][k] in l):
                    sum = sum + 1
            a = len(words[j])
            if(a==sum):
                count = count+1
        return count
                
                