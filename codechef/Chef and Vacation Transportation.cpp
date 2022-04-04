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
		int x,y,z;
		cin>>x>>y>>z;
		if((x>=1 && x<=1000000000)&&(y>=1 && y<=1000000000)&&(z>=1 && z<=1000000000))
		{
			if(x+y>z) cout<<"TRAIN"<<endl;
			if(x+y==z) cout<<"EQUAL"<<endl;
			if(x+y<z) cout<<"PLANEBUS"<<endl;
	    }	
	}
		
 	return 0;
	}
}