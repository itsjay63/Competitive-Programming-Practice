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
		vector<int> v1,v2;
		int count=0;
		for(int i=0;i<n;i++){
			int a; cin>>a;
			v1.push_back(a);
		}
		for(int i=0;i<n;i++){
			int a; cin>>a;
			v2.push_back(a);
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(v1[i]==v2[j] and i==j) count++;
			}
		}
		cout<<count<<endl;
	
	}
}