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
	if(t>=1 && t<=5000){
		while(t--){
		int x1,x2,y1,y2,z1,z2;	
		cin>>x1>>x2>>y1>>y2>>z1>>z2;
		if((x1>=20 && x1<=50)&&(x2>=20 && x2<=50)&&(y1>=1900 && y1<=2100)&&(y2>=1900 && y2<=2100)&&(z1>=1 && z1<=6)&&(z2>=1 && z2<=6)){
			if((x1<=x2)&&(y1<=y2)&&(z1>=z2)) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;			
		}
		}
	}		
 	return 0;
}