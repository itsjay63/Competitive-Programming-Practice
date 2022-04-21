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
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		if(abs(x1-x2) >= abs(y1-y2))
			cout<<abs(x1-x2)<<endl;
		else
			cout<<abs(y1-y2)<<endl;
	}	
}