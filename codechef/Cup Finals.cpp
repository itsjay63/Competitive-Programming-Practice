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
		int x,y,d;
		cin>>x>>y>>d;
		if(abs(x-y) <= d){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
		
	}	
}