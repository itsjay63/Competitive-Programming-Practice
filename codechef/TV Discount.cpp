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
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if((a-c)>(b-d)) cout<<"Second"<<endl;
		else if((a-c)<(b-d)) cout<<"First"<<endl;
		else cout<<"Any"<<endl;
	}
	return 0;
	
}
		
	
		
	

