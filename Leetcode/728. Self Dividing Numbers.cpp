class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;
        for(int i=left;i<=right;i++){
           int count1=0,count2=0;
           int a=i,b=i; 
           while(a){
               int c = i%10;
               if(c==0) break;
               count1++;
               a=a/10;
           } 
           while(b){
               int d = b%10;
               if(d==0) break;
               if(i%d==0) count2++;
               b=b/10;
           } 
           if((count1==count2)&&(count1 != 0 && count2 != 0)) nums.push_back(i); 
           
        }
        return nums;
    }
};