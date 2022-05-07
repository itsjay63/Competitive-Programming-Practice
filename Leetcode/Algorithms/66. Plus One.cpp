class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       reverse(digits.begin(),digits.end());
        int l = digits.size();
        digits[0]=digits[0]+1;
        if(digits[0]>9){
            for(int i=0;i<l;i++){
                if(i<l-1){
                    if(digits[i]> 9){
                        digits[i]=0;
                        digits[i+1]=digits[i+1]+ 1;
                    }
                }
                if(i==l-1) {
                    if(digits[i]> 9){
                        digits[i]=0;
                        digits.push_back(1);
                    }
                }
    
            }
            
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};