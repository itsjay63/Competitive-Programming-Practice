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
		if(x>y) cout<<"SECOND"<<endl;
		if(x<y) cout<<"FIRST"<<endl;
		if(x==y) cout<<"ANY"<<endl;
		
	}
return 0;
}