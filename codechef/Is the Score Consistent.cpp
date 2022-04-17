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
		int a,b; cin>>a>>b;
		int c,d; cin>>c>>d;
		if(c-a>=0 && d-b>=0) cout<<"POSSIBLE"<<endl;
		else cout<<"IMPOSSIBLE"<<endl;
	}
	
	return 0;
}