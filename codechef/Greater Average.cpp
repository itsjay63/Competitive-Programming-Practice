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
		float a,b,c;
		cin>>a>>b>>c;
		float avg = (a+b)/2;
		if(avg>c) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}
		
	
		
	

