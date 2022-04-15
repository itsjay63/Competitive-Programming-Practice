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
		int n,l,x; cin>>n>>l>>x;
		if(n==0) cout<<0<<endl;
		else if(l<=n-l) cout<<l*x<<endl;
		else if(l>n-l) cout<<(n-l)*x<<endl;
		
	}
	return 0;
}