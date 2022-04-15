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
		int count=0;
		int n,k; cin>>n>>k;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x>k) count++;
			
		}
		cout<<count<<endl;
		
	}
return 0;
}