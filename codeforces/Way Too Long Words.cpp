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
	
	int n; cin>>n;
	while(n--){
		string s;
		cin>>s;
		int l = s.size();
		if(l>10){
			cout<<s[0]<<l-2<<s[l-1]<<endl;
		}
		else{
			cout<<s<<endl;
		}
		
		
		
	}
	
		
}
