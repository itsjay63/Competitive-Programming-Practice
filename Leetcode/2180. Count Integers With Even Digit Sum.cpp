class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1; i<=num; i++){
            int sum = 0;
            int j = i;
            while(j){
                sum = sum + (j%10);
                j = j/10;
            } 
            if(sum%2==0) {
                count++;
            }
            
        }
        return count;
    }
};