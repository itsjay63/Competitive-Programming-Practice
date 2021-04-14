//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double


int main(){
    ll n,k;
    cin>>n>>k;
    for(ll i=0;i<k;i++){
    if(n%10==0) n=n/10;
    else n--;
    }
    cout<<n<<endl;
return 0;
}

