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
		int x; cin>>x;
		if(x%5) cout<<-1<<endl;
		else cout<<x/10 + (x%10)/5<<endl;
		
		
	}	
}