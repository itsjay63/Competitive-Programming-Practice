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
			int m,s; cin>>m>>s;
			if((m>=1 && m<=1000)&&
		   	(s>=1 && s<=40))
		   	{
				cout<<m/s<<endl;
			}
		
		}
	}	
	return 0;
}