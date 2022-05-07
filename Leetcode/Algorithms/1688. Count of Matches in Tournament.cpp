class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        if(n>=1 && n<=200){
            while(n>1){
                sum=sum+n/2;
                n=n-(n/2);   
            }
        }
        return sum;
    }
};