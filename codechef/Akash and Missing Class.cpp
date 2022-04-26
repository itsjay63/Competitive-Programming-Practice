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
	if(t>=1 and t<=100){
		while(t--){
			int n; cin>>n;
			if(n>=1 and n<=1e9){
				if(n<6) cout<<0<<endl;
			else if(n==6) cout<<1<<endl;
			else if(n>6) {
					if(n%7==6){
						cout<<n/7 + 1 <<endl;
					}else{
						cout<<n/7<<endl;
					}
				}
			}
			
		}	
	}
	
	
}