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
	
	int t; 
	cin>>t;
	while(t--){
		int x,y,z; cin>>x>>y>>z;
		if((y/x) <= z) cout<<z-(y/x)<<endl;
		else cout<<0<<endl;
	}
	
	return 0;
}