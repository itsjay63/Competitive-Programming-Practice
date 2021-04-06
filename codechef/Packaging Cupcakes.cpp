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
    if(t>=1 && t<=1000)
    {
        while(t--)
        {
            ll n;
            cin>>n;
            if(n>=2 && n<=100000000){
                if(n==2){
                    cout<<n<<endl;
                }
                else{
                    cout<<n/2+1<<endl;
                }
            }
        }
    }

return 0;
}


