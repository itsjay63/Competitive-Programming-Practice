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
        ll arr[10]={},k;
        for(ll i =0; i<10;i++){
            cin>>arr[i];
        }
        cin>>k;
        for(ll j=9;j>=0;j--){
            if(k>=arr[j]){
                k=k-arr[j];
            }
            else{
                cout<<j+1<<endl;
                break;
            }
        }
    }
return 0;
}

