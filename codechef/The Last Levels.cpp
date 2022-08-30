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
		int x,y,z;		
		cin>>x>>y>>z;
		if(x<=3){
			cout<<(x*y)<<endl;
		}else if(x%3==0){
			cout<<(x*y)+(((x/3)-1)*z)<<endl;
		}else {
			cout<<(x*y)+(((x/3))*z)<<endl;
		}
		
	}
	
	return 0;
}
		
	
		
	

