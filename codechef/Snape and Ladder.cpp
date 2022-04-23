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
		int b,ls; cin>>b>>ls;
		double cmin = sqrt(ls*ls - b*b);
		double cmax = sqrt(ls*ls + b*b);
		cout<<cmin<<" "<<cmax<<endl;
	}
}