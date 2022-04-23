class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        l = len(sentences)
        b = []
        while(l):
            a = []
            a = sentences[l-1].split(" ")
            b.append(len(a))
            l=l-1
        return max(b)