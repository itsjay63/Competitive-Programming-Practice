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
	cin.ignore();
	while(t--){
		int n; cin>>n;
		if(n>=1 && n<=4) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}