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
		float x,y,xr,yr,d;
		cin>>x>>y>>xr>>yr>>d;
		if((x>=1 && x<=100)&&(y>=1 && y<=100)&&(xr>=1 && xr<=10)&&(yr>=1 && yr<=10)&&(d>=1 && d<=10)){
			x=x/xr;
			y=y/yr;
			int min = x>y?y:x;
			if(min>d){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
		}
	}		
 	return 0;
}