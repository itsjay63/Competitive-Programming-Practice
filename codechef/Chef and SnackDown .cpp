//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------



#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif*/
	
	
    int t;
    cin>>t;
    if(t>=1 && t<= 10)
    {
    while(t--)
    {
        int n;
        cin>>n;
        if(n>=2010 && n<=2019)
        {
        if(n==2010 || n==2015 || n==2016 || n==2017 || n==2019)
        {
            cout<<"HOSTED"<<endl;
        }
        else
        {
            cout<<"NOT HOSTED"<<endl;
        }
        }
    }
    }
    return 0;
}
