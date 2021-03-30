//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin>>s;
    char d='A';
    int count=0,ans=1;
    for(char c:s)
    {
        if(c==d)
        {
            count++;
            ans=max(ans,count);
        }
        else
        {
            d=c;
            count=1;
        }
    }
    cout<<ans;
 	return 0;
}
