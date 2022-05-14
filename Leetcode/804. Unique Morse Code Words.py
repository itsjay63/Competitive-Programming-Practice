class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        l = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        s = ""
        m=[]
        for i in range(0,len(words)):
            for j in range(0,len(words[i])):
                c = ord(words[i][j]) - 97
                s = s + (l[c])
            m.append(s)
            s=""
        a = set(m)  
        return len(a)
                
                
        