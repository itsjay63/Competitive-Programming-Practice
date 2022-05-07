class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        ans = 0
        if(len(mat)==1):
            ans = mat[0][0]
        elif(len(mat) % 2 == 0):
            for i in range(0,len(mat)):
                for j in range(0,len(mat)):
                    if(i==j):
                        ans = ans + mat[i][j]
            for i in range(0,len(mat)):
                mat[i] = mat[i][::-1]
            for i in range(0,len(mat)):
                for j in range(0,len(mat)):
                    if(i==j):
                        ans = ans + mat[i][j]
        elif(len(mat) % 2 !=0):
            for i in range(0,len(mat)):
                for j in range(0,len(mat)):
                    if(i==j):
                        ans = ans + mat[i][j]
            for i in range(0,len(mat)):
                mat[i] = mat[i][::-1]
            for i in range(0,len(mat)):
                for j in range(0,len(mat)):
                    if(i==j):
                        ans = ans + mat[i][j]
            ans = ans - mat[len(mat)//2][len(mat)//2]
        return ans
            
            