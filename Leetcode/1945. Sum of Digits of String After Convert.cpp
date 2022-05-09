class Solution {
public:
    int getLucky(string s, int k) {
        string s1;
        int sum=0;
        for(int i=0;i<s.size();i++){
            s1 = s1 + to_string(s[i] - 'a'+1);
        }
        for(int i=0;i<s1.size();i++){
            cout<<s1[i]<<" ";
        }
        while(k--){
             sum = 0;
             for(int i=0;i<s1.size();i++){
              sum = sum + ( s1[i] - '0');
            }
            s1 = to_string(sum);
            cout<<s1<<endl;
        }
        return sum;
       
        
    }
};