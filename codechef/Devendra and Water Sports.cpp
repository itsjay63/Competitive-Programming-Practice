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
	if(t>=1 && t<=10){
		while(t--){
		int z,y,a,b,c;
		cin>>z>>y>>a>>b>>c;
		if((z>=10000 && z<=100000)&&(y>=0 && y<=z)&&(c>=100 && c<=5000)&&(a>=100 && a<=5000)&&(b>=100 && b<=5000)){
			if(z-y>=a+b+c) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		}
		
	}
 	return 0;
}