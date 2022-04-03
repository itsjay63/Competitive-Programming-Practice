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
	if(t>=1 && t<=100){
		while(t--){
		int x;	
		cin>>x;
			if(x>=1 && x<=1000){
				if(x%4==0) cout<<"North"<<endl;
				else if(x%4==1) cout<<"East"<<endl;
				else if(x%4==2) cout<<"South"<<endl;
				else if(x%4==3) cout<<"West"<<endl;
			}
			
	   }
	}		
 	return 0;
}