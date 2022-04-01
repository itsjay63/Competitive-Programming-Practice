//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------




#include<bits/stdc++.h>
using namespace std;

int main()
{ 
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//#endif 
	
	int t;
	cin>>t;
	if(t>=1 && t<=5000){
		while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		if((x>=0 && x<=1000) && (y>=0 && y<=1000) && (z>=0 && z<=1000)){
			if(((z*2)+x)>=y){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}	
	}
	}		
 	return 0;
 	
}