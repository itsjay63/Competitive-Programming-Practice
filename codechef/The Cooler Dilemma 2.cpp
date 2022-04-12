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
		if(y%x==0) cout<<(y/x)-1<<endl;
		else cout<<y/x<<endl;	
		
	}
return 0;
}