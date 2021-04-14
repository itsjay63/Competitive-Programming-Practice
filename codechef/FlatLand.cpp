//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    if(t>=1 && t<=1000){
    while(t--){
        ll n,ans,count=0;
        cin>>n;
        while(n>0){
        ans=(sqrt(n));
        ans=ans*ans;
        n=n-ans;
        count++;
        }
        cout<<count<<endl;
    }
    }
return 0;
}

