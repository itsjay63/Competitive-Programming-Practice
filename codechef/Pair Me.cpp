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
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a>=1 && a<=1000)&&(b>=1 && b<=1000)&&(c>=1 && c<=1000))
        {
            if(a+b==c)
            {
                cout<<"YES"<<endl;
            }
            else if(b+c==a)
            {
                cout<<"YES"<<endl;
            }
            else if(a+c==b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
