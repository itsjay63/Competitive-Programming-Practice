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
        ll n,k,sum=0,num;
        cin>>n>>k;
        if((n>=1 && n<=100)&&(k>=1 && k<=100000)){
        for(ll i = 0; i<n;i++){
            cin>>num;
            sum=sum+num;
        }
        if(sum%k==0) cout<<"0"<<endl;
        else cout<<"1"<<endl;

    }
    }
    }
return 0;
}

