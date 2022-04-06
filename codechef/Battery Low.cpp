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
	if(t>=1 && t<=100){
		while(t--){
			int x; cin>>x;
			if(x>=1 && x<=100){
				if(x<=15) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
		}
	}
return 0;
}