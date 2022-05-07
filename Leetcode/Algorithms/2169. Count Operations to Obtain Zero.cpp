class Solution {
public:
    int countOperations(int num1, int num2) {
        int count=0;
        if(num1==0 and num2==0){
            return count;
        }
        else if(num1==0 or num2==0){
            return count;
        }
        else if((num1>0 and num1<=1e5)and(num2>0 and num2<=1e5))
        {
            
            while(num1 != num2){
                if(num1>=num2){
                    num1=num1-num2;
                    count++; 
                }
                else if(num1<num2){
                    num2=num2-num1;
                    count++; 
                }
                
            }
        }
        return count+1;
    }
};