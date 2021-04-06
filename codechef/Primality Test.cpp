//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

ll isprime(ll m){
    for(int i=2;i<=(int)sqrt(m);i++){
        if(m%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){
    ll t;
    cin>>t;
    if(t>=1 && t<=20){
    while(t--){
        ll n;
        cin>>n;
        if(n>=1 && n<=100000){
        if(n==1){
            cout<<"no"<<endl;
            continue;
        }
        if(isprime(n)==1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    }
    }
    return 0;
}


