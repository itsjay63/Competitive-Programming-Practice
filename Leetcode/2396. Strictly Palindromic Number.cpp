class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i < n-1; i++) {
            int num = n;
            vector<int> v;
            while (num) {
                v.push_back(num % i);
                num /= i;
            }
            
            if (!equal(begin(v), begin(v)+size(v)/2, rbegin(v)))
                return false;
        }
        return true;
    }
};