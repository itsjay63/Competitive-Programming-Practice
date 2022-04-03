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
	if(t>=1 && t<=300){
		while(t--){
			int h,x,y,c;
			cin>>h>>x>>y>>c;
			if((h>=1 && h<=10) && (x>=1 && x<=10) && (y>=1 && y<=10) && (c>=1 && c<=100)){
				int m = h * (x+(y/2));
				if(m<=c) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
		}
	}
 	return 0;
}