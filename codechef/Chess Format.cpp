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
	if(t>=1 && t<=1100){
		while(t--){
		int a,b;	
		cin>>a>>b;
		if((a>=1 && a<=100)&&(b>=0 && b<=10)){
			if(a+b<3) cout<<"1"<<endl; 
			if(a+b>=3 && a+b<=10) cout<<"2"<<endl;
			if(a+b>=11 && a+b<=60) cout<<"3"<<endl; 
			if(a+b>60) cout<<"4"<<endl; 
		}
		}
	}		
 	return 0;
}