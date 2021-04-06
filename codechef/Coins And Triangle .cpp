//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double


int main(){
    ll t;
    cin>>t;
    if(t>=1 && t<=100)
    {
        while(t--)
        {
            ll n,c=0;
            cin>>n;
            if(n>=1 && n<=1000000000){
                    c=((ll)sqrt(8*n+1)-1)/2;
                    cout<<c<<endl;
            }
        }
    }

    return 0;
}


