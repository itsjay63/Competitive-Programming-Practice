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
		int x,a,b,c; cin>>x>>a>>b>>c;
		vector<int> v={a,b,c};
		sort(v.begin(),v.end());
		cout<<(x-1) * v[0] + v[1]<<endl;
	}
	
	
}
	
	
