class Solution {
public:
    int sumBase(int n, int k) {
        int i=0;
        int r=0;
        int sum=0;
        while(n){
            r = n%k;
            sum = sum + r;
            n = n/k;
            
        }
        return sum;
    }
};