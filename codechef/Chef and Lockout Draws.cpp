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
	if(t>=1 and t<=1000){
		while(t--)
		{
			int a,b,c; cin>>a>>b>>c;
			if((a>=1 and a<=1e6)and (b>=1 and b<=1e6)and(c>=1 and c<=1e6))
			{
				if(a+b == c) cout<<"YES"<<endl;
				else if(b+c == a) cout<<"YES"<<endl;
				else if(a+c == b) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
	
				
			}
		
		}
			
	}
		
}
	