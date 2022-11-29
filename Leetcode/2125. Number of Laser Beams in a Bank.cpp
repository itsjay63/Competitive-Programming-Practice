class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;
        vector<int> v1;
        int count;
        for(int i=0;i<bank.size();i++){
            count=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    count++;
                }
            }
            if(count!=0){
                v.push_back(count);
            }
            else{
                v1.push_back(count);
            }
        }
        int ans=0;
        if(v1.size()==bank.size()){
            ans=0;
        }
        else{
            int mul,sum=0;
            for(int i=0;i<v.size()-1;i++){
                mul = v[i]*v[i+1];
                sum = sum + mul;
            }
            ans=sum;
        }
        
        return ans;
        
        
        
    }
};