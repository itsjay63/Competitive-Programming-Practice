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
		int n; cin>>n;
		n=n%4;
		if(n==0 || n==1) cout<<"NO"<<endl;
		if(n==2 || n==3) cout<<"YES"<<endl;
		
	}
		
	
return 0;
}