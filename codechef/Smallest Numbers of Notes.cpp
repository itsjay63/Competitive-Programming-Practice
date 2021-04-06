//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double


int main(){
    ll arr[6]={1,2,5,10,50,100};

    ll t;
    cin>>t;
    if(t>=1 && t<=1000){
        while(t--){
            ll n;
            cin>>n;
            ll ans=0;
            int i=5;
            while(n!=0){
                ans = ans + n/arr[i];
                n=n%arr[i];
                i--;
            }
            cout<<ans<<endl;
        }
    }
return 0;
}


