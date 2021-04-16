//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,ans=0;
       cin>>n;
       for(ll i=5;i<=n;i*=5){
            ans=ans+n/i;
       }
       cout<<ans<<endl;
    }
return 0;
}

