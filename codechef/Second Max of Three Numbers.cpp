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
	if(t>=1 and t<=6){
		while(t--){
		vector<int> v;
		int n;
		for(int i=0;i<3;i++){
			cin>>n;
			if(n>=1 and n<=10000)
				v.push_back(n);
		}
		
		sort(v.begin(),v.end());
		cout<<v[1]<<endl;
	}
	}
	
	return 0;
}
		
	
		
	

