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
		int x,y; cin>>x>>y;
		if(x-y==0) cout<<0<<endl;
		else if(x-y>0) cout<<x-y<<endl;
		else cout<<(x-y) * -1 <<endl;	}
	
	return 0;
}