class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1,s=0;
        if(n>=1 && n<=100000){
            while(n){
                int i =n%10;
                p=p * (i);
                s=s + (i);
                n = n/10;
            }
            
        }
        return p-s;
    }
};