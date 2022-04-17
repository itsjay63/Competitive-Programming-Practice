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
		int n,m,k; cin>>n>>m>>k;
		if(n<= (m*k)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}