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
	if(t>=1 && t<=1000){
		while(t--){
		int n,x,y;
		cin>>n>>x>>y;
		if((n>=1 && n<=1000)&&(x>=1 && x<=1000)&&(y>=1 && y<=1000)){
			if(((n+1)*y)>=x) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
 	return 0;
}
}