//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll cfour(ll n)
{
    ll sum=0,j;
    while(n>0)
    {
        j=n%10;
        if(j==4)
            sum++;
        n=n/10;
    }
    return sum;
}

int main()
{
    ll t;
    cin>>t;
    if(t>=1 && t<=100000)
    {
        while(t--)
        {
            ll a;
            cin>>a;
            cout<<cfour(a)<<endl;
        }
    }
 	return 0;
}
