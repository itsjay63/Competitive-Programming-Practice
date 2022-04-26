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
	if(t>=1 and t<=100){
		while(t--)
		{
			int n; cin>>n;
			int count=0;
			if(n>=1 and n<=100){
				while(n--){
					int s,j; 
					cin>>s>>j;
					if((s>=1 and s<=j)and (j>=s and j<=300)){
						if(abs(j-s)>5) {
					
							count++;
						}
				
			  		}
		   		}
			}
		
			cout<<count<<endl;
		}
	}
		
}
	