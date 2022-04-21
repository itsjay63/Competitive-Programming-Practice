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
		int n,k;
		cin>>n>>k;
		if(k==1)
			if(n%4==0) cout<<"On"<<endl;
			else cout<<"Ambiguous"<<endl;
		
		if(k==0)
			if(n%4==0) cout<<"Off"<<endl;
			else cout<<"On"<<endl;

		
	}	
}