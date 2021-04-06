//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double


int main(){
    ll arr[13]={};
    for(int i=1;i<13;i++){
        arr[i]=pow(2,i-1);
    }
    ll t;
    cin>>t;
    if(t>=1 && t<=1000)
    {
        while(t--)
        {
            ll n;
            cin>>n;
            ll maxn=2048,ans=0;
            while(n!=0){
                ans = ans + n/maxn;
                n=n%maxn;
                maxn=maxn/2;
            }
            cout<<ans<<endl;
        }
    }
return 0;
}


