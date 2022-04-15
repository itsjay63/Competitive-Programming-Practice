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
	if(t>=1 && t<=100000){
		while(t--){
			int n; cin>>n;
			if((n>=1 && n<200000)&&
		   	(n%2 != 0))
		   	{
				cout<<(n/2)+1<<endl;
			}
		
		}
	}	
	return 0;
}