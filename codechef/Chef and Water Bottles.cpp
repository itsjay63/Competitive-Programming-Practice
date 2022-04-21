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
		int n,x,k; cin>>n>>x>>k;
		if(n<=(k/x)) cout<<n<<endl;
		else cout<<k/x<<endl;
		
	}	
}