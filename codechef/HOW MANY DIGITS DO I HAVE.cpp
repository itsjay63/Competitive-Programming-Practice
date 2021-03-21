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
	
    int n;
    cin>>n;
    if(n>=0 && n<=1000000)
    {
        if(n>=0 && n<=9)
        {
            cout<<"1"<<endl;
        }
        else if(n>=10 && n<=99)
        {
            cout<<"2"<<endl;
        }
        else if(n>=100 && n<=999)
        {
            cout<<"3"<<endl;
        }
        else if(n>=1000 && n<=1000000)
        {
            cout<<"More than 3 digits"<<endl;
        }

    }
    return 0;
}
