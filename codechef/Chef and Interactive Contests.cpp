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
	
	int n,r; cin>>n>>r;
	if((n>=1 and n<=1000)and(r>=1300 and r<=1500)){
		while(n--){
			int R; cin>>R;
			if(R>=r) cout<<"Good boi"<<endl;
			else if(R<r) cout<<"Bad boi"<<endl;
		}
		
	}
	
	
}
	
