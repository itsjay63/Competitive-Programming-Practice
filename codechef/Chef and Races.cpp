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
	if(t>=1 && t<=144){
		while(t--){
			int x,y,a,b; cin>>x>>y>>a>>b;
			if((x>=1 && x<=4)&&
				(y>=1 && y<=4)&&
				(a>=1 && a<=4)&&
				(b>=1 && b<=4)&&
				(x != y) && (a !=b))
				{
					cout<<2-(x==a or x==b)-(y==a or y==b)<<endl;
	
				}
			
			
		}
		
	}
}