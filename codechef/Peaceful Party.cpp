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
		int a,b,c; cin>>a>>b>>c;
		if(a+c >= b) cout<<a+c<<endl;
		else if(a+c < b) cout<<b<<endl;
		
	}
	
	
}