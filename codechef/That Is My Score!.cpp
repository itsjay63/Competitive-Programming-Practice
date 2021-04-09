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
    while(t--){
        ll n,p,s,sum=0,arr[12]={};
        cin>>n;
        for(ll i=1;i<=n;i++){
                cin>>p>>s;
                if(arr[p]<=s){
                arr[p]=s;
                }
        }
        for(ll j=1;j<12;j++){
                if(j<=8){
                    sum=sum+arr[j];
                }
        }
        cout<<sum<<endl;
    }
return 0;
}


