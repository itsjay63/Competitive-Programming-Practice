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
		int n; cin>>n;
		vector<int> v1;
		vector<int> v2;
		int a=0; int b=0;
		for(int i=0;i<n;i++){
			int x; cin>>x;
			v1.push_back(x);
		}
		for(int i=0;i<n;i++){
			int x; cin>>x;
			v2.push_back(x);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		for(int i=0;i<n-1;i++){
			a=a+v1[i];
			b=b+v2[i];
		}
		if(a>b) cout<<"Bob"<<endl;
		else if(a<b) cout<<"Alice"<<endl;
		else if(a==b) cout<<"Draw"<<endl;
	
	}
	
		
}
	