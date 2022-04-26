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
		int x,y; cin>>x>>y;
		if(y==0) cout<<x<<endl;
		else if (y<x) cout<<y*2 + (x-y)<<endl;
		else if(x==y) cout<<x+(x-1)<<endl;	
	}
}