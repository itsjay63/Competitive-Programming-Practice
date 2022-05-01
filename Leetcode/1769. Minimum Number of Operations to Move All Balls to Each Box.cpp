class Solution {
public:
    vector<int> minOperations(string boxes) {
        int l = boxes.size();
        vector<int> v;
        int sum = 0;
        for(int i=0;i<l;i++){
            
            for(int j=0;j<l;j++){
               
                if(i != j and boxes[i]=='1' and boxes[i]==boxes[j]){
                    sum = sum + abs(i-j);
                }
                else if(i != j and boxes[i]=='0' and boxes[i]!=boxes[j]){
                    sum = sum + abs(i-j);
                    
                }
                
            }
            v.push_back(sum);
            sum=0;
            
        }
        return v;
    }
};