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
		vector<int> v;
		for(int i=0;i<3;i++){
			int n; cin>>n;
			v.push_back(n);
		}
		cout<<*max_element(v.begin(),v.end())<<endl;
	}
	
		
}