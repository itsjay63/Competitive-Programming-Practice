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
	
	int t;
	cin>>t;
	if(t>=1 && t<=10000){
		while(t--){
		long long m;	
		int n,k;
		cin>>m>>n>>k;
		if((m>=1 && m<=1000000000)&&(n>=1 && n<=10000)&&(k>=1 && k<=10000)){
			if(m>(n*k)) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		}
	}		
 	return 0;
}