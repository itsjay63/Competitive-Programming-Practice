class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=s.size();
        int start=0,end=l-1;
        char temp;
        while(start<=end){
            temp=s[end];
            s[end]=s[start];
            s[start]=temp;
            start++;
            end--;
        }
        cout<<"[";
        for(int i=0;i<l;i++){
            if(i==l-1) cout<<"\""<<s[i]<<"\"";
            else cout<<"\""<<s[i]<<"\""<<",";
        }
        cout<<"]";
        
        
    }
};