//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double


int main(){
    ll t;
    cin>>t;
    if(t>=1 && t<=100000){
        while(t--){
            ll n;
            cin>>n;
            if(n>=2 && n<=100000){
            ll arr[n];
            for(ll i=0;i<n;i++){
                cin>>arr[i];
            }
            sort(arr,arr+n);
            ll min=arr[0]+arr[1];
            cout<<min<<endl;

        }
    }
    }
return 0;
}


