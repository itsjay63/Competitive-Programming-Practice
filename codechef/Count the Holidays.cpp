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
	while(t--)
	{
		int n; cin>>n;
		vector<bool> v(31,false);
		while(n--){
			int a; cin>>a;
			v[a]=true;
		}
		v[6] = v [7] = true;
		v[13] = v[14] = true;
		v[20] = v[21] = true;
		v[27] = v[28] = true;
		
		cout<<count(v.begin(),v.end(),true)<<endl;
		
		
			
	
	
	}
}