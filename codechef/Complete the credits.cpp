//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------




#include<bits/stdc++.h>
using namespace std;


int main()
{ 
	
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif 
	
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		if(n>65) cout<<"Overload"<<endl;
		else if(n<35) cout<<"Underload"<<endl;
		else cout<<"Normal"<<endl;
	
	}
}