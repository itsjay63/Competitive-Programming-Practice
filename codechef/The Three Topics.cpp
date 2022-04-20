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
	
	int a,b,c,x; cin>>a>>b>>c>>x;
	if((a>=1 && a<=10)&&
	   (b>=1 && b<=10)&&
	   (c>=1 && c<=10)&&
	   (x>=1 && x<=10)){
		if(a==x || b==x || c==x) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		
	}
	
		
}