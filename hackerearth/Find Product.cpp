//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n,ans=1;
    cin>>n;
    ll arrn[n]={};
    for(ll i=0;i<n;i++){
        cin>>arrn[i];
    }
    for(ll i=0;i<n;i++){
        ans=ans*arrn[i] % (1000000000+7);
    }
    cout<<ans<<endl;
return 0;
}
