class Solution:
    def defangIPaddr(self, address: str) -> str:
        l = len(address)
        a = []
        for i in address:
            if(i=="."):
                a.append("[.]")
            else:
                a.append(i)
        a = "".join(a)
        return a
                