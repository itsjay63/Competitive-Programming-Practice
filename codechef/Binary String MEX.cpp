//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------


#include<bits/stdc++.h>
constexpr int MAX = (int) 1e6;
int dp0[MAX+2],dp1[MAX+2];
int next0[MAX],next1[MAX];
using namespace std;

string mex(string  s){
    long long int strLength = s.length();
    
    long long int lastPosition = -1;
    for(long long int i=0;i<strLength;i++){
        if(s[i]=='0'){
            for(long long int j=lastPosition+1;j<=i;j++){
                next0[j] = i;
                lastPosition = i;
            }
        }
    }
    
    
    for(long long int i=lastPosition+1;i<strLength;i++){
        next0[i] = strLength;
    }
    
    if(next0[0]==strLength){
        return "0";
    }
    
    lastPosition = -1;
     for(long long int i=0;i<strLength;i++){
        if(s[i]=='1'){
            for(long long int j=lastPosition+1;j<=i;j++){
                next1[j] = i;
                lastPosition = i;
            }
        }
    }
    
    for(long long int i=lastPosition+1;i<strLength;i++){
        next1[i] = strLength;
    }
    
    dp0[strLength]=dp0[strLength+1]=0;
    dp1[strLength]=dp1[strLength+1]=0;
    
    for(long long int i = strLength-1;i>=0;i--){
        dp0[i]=dp0[i+1];
        if(s[i]=='0' && next1[i]<strLength){
            dp0[i]=max(dp0[i],dp0[next1[i]+1]+1);
        }if(s[i]=='1' && next0[i]<strLength){
            dp0[i]=max(dp0[i],dp0[next0[i]+1]+1);
        }
        
        dp1[i]=dp1[i+1];
        if(next1[i]<strLength){
            dp1[i]=max(dp1[i],dp0[next1[i]+1]+1);
        }
    }
    
    long long int len = dp1[0]+1;
    long long int currentIndex = next1[0]+1;
    
    string ans = "1";
    for(long long int i=1;i<len;i++){
        if(currentIndex>=strLength){
            ans.push_back('0');
            continue;
        }
        
        if(next0[currentIndex]>=strLength){
            ans.push_back('0');
            currentIndex = next0[currentIndex]+1;
            continue;
        }
        
        if(dp0[next0[currentIndex]+1]<len-i-1){
            ans.push_back('0');
            currentIndex = next0[currentIndex]+1;
        }
        else{
            ans.push_back('1');
            currentIndex = next1[currentIndex]+1;
        }
    }
    return ans;
    
    
}
int main() {
    long long int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<mex(s)<<endl;
    }
	return 0;
}
