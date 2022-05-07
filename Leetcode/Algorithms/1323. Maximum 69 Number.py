class Solution:
    def maximum69Number (self, num: int) -> int:
        if(num>=1 and num<=10000):
            count=0
            i=0
            a=[]
            m=[]
            num1=num
            while(num1):
                i = i + 1
                j = num1%10
                if(j==9):
                    count=count+1
                a.append(j)
                num1=num1//10
                
            if(count==i):
                return num
            else:
                l = len(a)
                b= a.copy()
                for i in range(0,l):
                    if(a[i]==9):
                        b[i]= 6
                    elif(a[i]==6):
                        b[i]=9
                    sum=0
                    for i in range(0,l):
                        sum = sum + (b[i] * (10 ** i))
                    m.append(sum)
                    b = a.copy()  
                return max(m)
                
            
            
                
                
            
                
            
                
            
                    
                    