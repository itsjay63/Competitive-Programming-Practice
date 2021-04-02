//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    if(t>=1 && t<=10)
    {
        while(t--)
        {
            int a,b,i=0;
            cin>>a>>b;
            string s;
            cin>>s;
            char c ='*';
            int count=0;
            bool ans = false;
            for(auto d : s)
            {
                    if(d==c)
                    {
                        ++count;
                    }
                    else
                    {
                        ans =ans | (count>=b);
                        count=0;
                    }

            }
            ans = ans | (count>=b);
            cout<<(ans?"YES":"NO")<<endl;
		}
    }
    return 0;
}


