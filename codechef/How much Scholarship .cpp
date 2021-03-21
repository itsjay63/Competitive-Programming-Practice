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
	
	
    int r;
    cin>>r;
    if(r>=1 && r<=50)
    {
        cout<<"100"<<endl;
    }else if(r>=51 && r<=100)
    {
        cout<<"50"<<endl;
    }
    else if(r>=101)
    {
        cout<<"0"<<endl;
    }
    return 0;
}
