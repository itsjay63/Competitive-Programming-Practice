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
	int x=0;
	while(t--){
		string s;
		cin>>s;
		if(s=="X++") {
			x++;
		}
		else if(s == "++X") {
			++x;
		}
		else if(s=="X--") {
			x--;
		}
		else if(s=="--X") {
			--x;
		}
		
	}
	cout<<x<<endl;
		
}
		
	
		
	

