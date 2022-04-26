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
		int a,b,n=3;
		vector<int> v;
		while(n--){
			cin>>a>>b;
			v.push_back(a+b);
		}
		cout<<*max_element(v.begin(),v.end())<<endl;
		
	}
	
		
}
