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
	while(t--)
	{
		int amin,bmin,cmin,tmin,a,b,c;
		cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
		if(a+b+c >= tmin){
			if(a < amin) cout<<"NO"<<endl;
			else if(b < bmin) cout<<"NO"<<endl;
			else if(c < cmin) cout<<"NO"<<endl;
			else if(a >= amin and b >= bmin and c>= cmin)
				cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
		
	}
	
	
}