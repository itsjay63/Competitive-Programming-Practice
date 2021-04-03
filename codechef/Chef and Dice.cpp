//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
            cout<<20<<endl;
        else if(n==2)
            cout<<36<<endl;
        else if(n==3)
            cout<<51<<endl;
        else if(n==4)
            cout<<60<<endl;
        else
        {
            ll sum = 0;
            ll rem = n%4;
            sum = n*11;
            if(rem == 1)
                sum += 21;
            else if(rem == 2)
                sum += 22;
            else if(rem==3)
                sum += 22;
            else
                sum += 16;
            cout<<sum<<endl;
        }
    }
    return 0;
}


