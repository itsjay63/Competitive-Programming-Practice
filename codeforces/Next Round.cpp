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
	
	
		int n,k;
		cin>>n>>k;
		int count=0;
		vector<int> v;
		
			for(int i=0;i<n;i++){
				int a; cin>>a;
				v.push_back(a);
			}
			for(int i=0;i<n;i++){
				if(v[i]>=v[k-1] and v[i]>0){
					count++;
				}
			}
			
		cout<<count<<endl;
		
}
		
	
		
	

