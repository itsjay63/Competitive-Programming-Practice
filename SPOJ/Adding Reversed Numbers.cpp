//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

ll rev(ll k){
    ll j,sum=0;
    while(k>0){
    j=k%10;
    sum=sum*10+j;
    k=k/10;
    }
    return sum;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll m,n,ans;
        cin>>m>>n;
        ans = rev(m)+rev(n);
        cout<<rev(ans)<<endl;
    }
return 0;
}

