class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int l=operations.size();
        int x=0;
        for(int i=0; i<l; i++){
            if(operations[i]=="++X") ++x;
            else if(operations[i]=="X++") x++;
            else if(operations[i]=="--X") --x;
            else if(operations[i]=="X--") x--;           
        }
        return x;
    }
};