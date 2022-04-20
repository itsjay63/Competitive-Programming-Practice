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
	
	int x,y; cin>>x>>y;
	if((x>=1 && x<=1000)&&
		(y>=1 && y<=1000) && (y%2==0)){
		
		cout<<(x-y)+y/2<<endl;
	}
	
		
}