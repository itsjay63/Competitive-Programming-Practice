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
		int d,x,y,z;
		int a,b;
		cin>>d>>x>>y>>z;
		a = x * 7;
		b = y*d + z*(7-d);
		cout<<max(a,b)<<endl;
		
	}	
	return 0;
	
}
		
	
		
	

