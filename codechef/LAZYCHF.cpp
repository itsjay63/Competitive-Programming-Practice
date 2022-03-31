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
	if(t>=1 && t<=10000){
	while(t--){
		int x,m,d;
		cin>>x>>m>>d;
		if((x>=1 && x<=10) && (m>=1 && m<=10) && (d>=0 && d<= 100))
		{
			int num1 = x*m;
			int num2 = x+d;
			if(num1>=num2){
				cout<<num2<<endl;
			}else{
				cout<<num1<<endl;
			}
		}
		
	  }
	}	
 	return 0;
 	
}