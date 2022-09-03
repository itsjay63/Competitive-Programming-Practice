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
	if(t>=1 and t<=5000){
		while(t--){
			int g,c;
			cin>>g>>c;
			if((g>=1 and g<=10) and (c>=1000 and c<=3000)){
				cout<<(c*c)/(2*g)<<endl;
			}
		}
	}	
	return 0;
	
}
		
	
		
	

