class Solution {
public:
    int minOperations(int n) {
        vector<int> v={};
        int mid=0;
        int sum=0;
        int sum1=0;
        for(int i=0;i<n;i++){
            v.push_back((2*i)+1);
        }
        cout<<endl;
        if(n%2==0){
            mid = (v[(n/2)] + v[((n/2)-1)])/2;
            for(int i=0;i<n;i++){
                sum = sum + (mid - v[i]);
               
                if(i<(n/2)){
                     sum1=sum1 + (mid - v[i]);
                 }
            }
        }
    
        else if(n%2 != 0)
        {
            mid = v[n/2];
            for(int i=0;i<n;i++){
                sum = sum + (mid - v[i]);
                if(i<(n/2)){
                     sum1=sum1 + (mid - v[i]);
                 }
             }
        }
        return sum1;
    }
};