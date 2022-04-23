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
		double x1,x2,x3,v1,v2;
		cin>>x1>>x2>>x3>>v1>>v2;
		double c = abs(x1-x3)/v1;
		double k = abs(x2-x3)/v2;
		
		if(c<k) cout<<"Chef"<<endl;
		else if(c>k) cout<<"Kefa"<<endl;
		else if(c==k) cout<<"Draw"<<endl;



		
	}
	
	
}