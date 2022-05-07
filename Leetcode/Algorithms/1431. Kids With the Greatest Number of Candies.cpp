class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int l=candies.size();
        vector<int> v;
        vector<bool> b;
        int count1=l;
        int count2=0;
        for(int i=0;i<l;i++){
            int a=candies[i]+extraCandies;
            for(int j=0;j<l;j++){
                if(a>=candies[j])
                    count2++;
            }
            v.push_back(count2); 
            count2=0;
        }
        for(int i=0;i<l;i++){
            if(count1==v[i])
                b.push_back(true);
            else
                b.push_back(false);
        }
        
        return b;
    }
};