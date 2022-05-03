class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int l1 = jewels.size();
        int l2 = stones.size();
        int sum = 0;
        int count=0;
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
            sum = sum + count;
            count=0;
            
        }
        return sum;

    }
};