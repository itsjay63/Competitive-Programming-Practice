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
	
    int l,b;
    int a,p;
    cin>>l>>b;
    if((l>=1 && l<=1000)&&(b>=1 && b<=1000))
    {
        a=l*b;
        p= 2 *(l+b);
        if(a>p)
        {
            cout<<"Area"<<endl;
            cout<<a<<endl;
        }
        else if(a<p)
        {
            cout<<"Peri"<<endl;
            cout<<p<<endl;
        }
        else if(a == p)
        {
            cout<<"Eq"<<endl;
            cout<<a<<endl;
        }
    }
    return 0;
}
