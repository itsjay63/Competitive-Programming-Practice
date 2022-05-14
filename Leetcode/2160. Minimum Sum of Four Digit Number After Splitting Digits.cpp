class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        int a;
        int b;
        while(num){
            int j = num%10;
            v.push_back(j);
            num = num/10;
        }
        sort(v.begin(),v.end());
        a = v[0] * 10  + v[2];
        b = v[1] * 10  + v[3];
        
        return a+b;
    }
};