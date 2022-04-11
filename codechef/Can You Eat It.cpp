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
		int n,k; cin>>n>>k;
		if(n%k == 0){
			cout<<n/k<<endl;
		}else if(n == 0){
			cout<<0<<endl;
		}else {
			cout<<-1<<endl;
		
		}
	
	}
return 0;
}