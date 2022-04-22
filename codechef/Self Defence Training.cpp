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
		int n;
		cin>>n;
		int count=0;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(a>=10 && a<=60){
				count++;
			}
		}
		cout<<count<<endl;
		
		
	}	
}