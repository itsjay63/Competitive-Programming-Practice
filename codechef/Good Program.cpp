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
	if(t>=1 && t<=1000){
		while(t--){
			int n; cin>>n;
			if(n>=1 && n<=1000){
				if(n%4==0)
					cout<<"Good"<<endl;
				else 
					cout<<"Not Good"<<endl;
				
			}
		}
	}
	
		
}