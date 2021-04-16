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
       ll n,sum=0;
       cin>>n;
       ll arrn[n]={};
       for(ll i=0;i<n;i++){
            cin>>arrn[i];
       }
       for(ll i=0;i<n-1;i++){
            if(arrn[i]<arrn[i+1]){
                sum=sum+(arrn[i+1]-arrn[i]-1);
            }
            else{
                sum=sum+(arrn[i]-arrn[i+1]-1);
            }
       }
       cout<<sum<<endl;
    }
return 0;
}

