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
		int a,b; cin>>a>>b;
		if(a*10 < b*5) cout<<"SECOND"<<endl;
		else if(a*10 == b*5) cout<<"ANY"<<endl;
		else if(a*10 > b*5) cout<<"FIRST"<<endl;
		
	}
	
	
}