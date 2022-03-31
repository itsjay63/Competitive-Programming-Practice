//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------




#include<bits/stdc++.h>
using namespace std;

int main()
{ 
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif */
	
	int t;
	cin>>t;
	if(t>=1 && t<=1000){
	while(t--){
		int n,x,p;
		cin>>n>>x>>p;
		if((n>=1 && n<=100) && (x>=0 && x<=n) && (p>=0 && p<= (3*n)))
		{
			int i = n-x ;
			int m = (x*3) - (i);
			if(m>=p){
				cout<<"PASS"<<endl;
			}else{
				cout<<"FAIL"<<endl;
			}
		}
		
	  }
	}	
 	return 0;
 	
}