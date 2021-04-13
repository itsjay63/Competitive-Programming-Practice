//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double


int main(){
    ll n;
    cin>>n;
    ll mx=0;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        mx=max(mx,x);
        ans=ans+(mx-x);
    }
    cout<<ans<<endl;
return 0;
}


