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
        ll m,sum=0;
        cin>>m;
        while(m/5 !=0){
            sum+=m/5;
            m/=5;
        }
        cout<<sum<<endl;
    }
return 0;
}

