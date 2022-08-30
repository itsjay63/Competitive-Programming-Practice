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
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(((a+b)/2 >= 35) and ((a+c)/2 >=35) and ((b+c)/2 >=35)){
			
					cout<<"Pass"<<endl;
				
		}
		else cout<<"Fail"<<endl;
	}
	
	return 0;
}
		
	
		
	

