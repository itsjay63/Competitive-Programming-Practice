//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
ll isprime(ll a){
    if(a==1) return 0;
    if(a==2) return 1;
    if(a>2 && a%2==0) return 0;
    else{
        for(ll i=3;i<1+(ll)floor(sqrt(a));i+=2){
            if(a%i==0) return 0;
        }
    }
    return 1;

}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll m,n;
        cin>>m>>n;
        for(ll i=m;i<=n;i++){
            if(isprime(i)==1){
                cout<<i<<endl;
            }
        }
        cout<<endl;
    }
return 0;
}

