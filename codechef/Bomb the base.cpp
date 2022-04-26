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
		int n,x; cin>>n>>x;
		vector<bool> v(n,false);
		vector<int> v1;
		int count=0;
		for(int i=0;i<n;i++){
			
			int a; cin>>a;
			if(a<x){
				v[i]=true;
			}
			else if(a==x or a>x){
				count++;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(v[i]==true){
				v1.push_back(i+1);
			}
		}
		if(count == n){
			cout<<0<<endl;
		}
		else{
			cout<<*max_element(v1.begin(),v1.end())<<endl;
		}
		
		
	}
	
		
}
