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
	if(t>=1 and t<=100){
		while(t--){
			int x;
			cin>>x;
			if(x<=300){
				cout<<3000<<endl;
			}
			else
				cout<<x*10<<endl;
			
		}	
	}
	return 0;
}
		
	
		
	

