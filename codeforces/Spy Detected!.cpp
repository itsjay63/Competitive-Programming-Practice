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
        ll c;
        cin>>c;
        ll arrc[c]={};
        for(ll i=0; i<c;i++){
            cin>>arrc[i];
        }
        for(ll i=0;i<c;i++){
            ll count=1;
            for(ll j=0;j<c;j++){
                    if(arrc[i]==arrc[j] && i!=j){
                        count++;
                    }
            }
            if(count==1){
                cout<<i+1<<endl;
                break;
            }
        }
    }
return 0;
}

