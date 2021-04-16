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
        ll n,k,sum1=0,sum2=0;
        cin>>n>>k;
        ll arrn[n]={};
        for(ll i =0;i<n;i++){
            cin>>arrn[i];
        }
        for(ll i =0;i<n;i++){
            sum1=sum1+arrn[i];
            if(arrn[i]>k){
                arrn[i]=k;
            }
            sum2=sum2+arrn[i];
        }
        cout<<sum1-sum2<<endl;
    }
return 0;
}

