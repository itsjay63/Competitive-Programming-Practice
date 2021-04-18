//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n;
    cin>>n;
    ll i=1,ans=0;
    while(i<=n){
        ans+=i;
        if(ans>=n){
            cout<<"Patlu"<<endl;
            break;
        }
        ans+=2*i;
        if(ans>=n){
            cout<<"Motu"<<endl;
            break;
        }
        i++;
    }
return 0;
}

