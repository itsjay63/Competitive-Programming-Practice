class Solution:
    def reverse(self, x: int) -> int:
        sum=0
        if(x==0): return 0;
        if(x<0):
            x = x * -1
            while(x):
                j = x % 10
                sum = sum * 10 + j
                x = x // 10
            sum = sum *-1
            if(sum>= pow(2,31)*-1 and sum<= pow(2,31)-1):
                return sum
            else:
                return 0;
            
        else:
            while(x):
                j = x % 10
                sum = sum * 10 + j
                x = x // 10
            if(sum>= pow(2,31)*-1 and sum<= pow(2,31)-1):
                return sum 
            else:
                return 0;
            
        
            