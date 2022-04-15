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
	if(t>=1 && t<=21000){
		while(t--){
			int a,b,x; cin>>a>>b>>x;
			if((a>=100 && a<b)&&
		   	(b>a && b<=200)&&
		   	(x>=1 && x<=50))
		   	{
				cout<<(b-a)/x<<endl;
			}
		
		}
	}	
	return 0;
}