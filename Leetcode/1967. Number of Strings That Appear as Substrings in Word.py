class Solution:
    def numOfStrings(self, patterns: List[str], word: str) -> int:
        sum = 0
        for i in range(0,len(patterns)):
            if(patterns[i] in word):
                sum = sum +1
        return sum