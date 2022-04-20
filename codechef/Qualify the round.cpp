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
	while(t--){
		int x,a,b; cin>>x>>a>>b;
		if(x<= a*1 + b*2)
			cout<<"Qualify"<<endl;
		else
			cout<<"NotQualify"<<endl;
	}
	
		
}