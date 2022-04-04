//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------




#include<bits/stdc++.h>
using namespace std;

int main()
{ 
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//#endif 
	
	int t;
	cin>>t;
	if(t>=1 && t<=20){
		while(t--){
		int a,b;
		cin>>a>>b;
		if((a>=0 && a<=100)&&(b>=0 && b<=100)){
			if(a==0 && a+b>0) cout<<"Liquid"<<endl;
			if(b==0 && a+b>0) cout<<"Solid"<<endl;
			if(a>0 && b>0) cout<<"Solution"<<endl;
		}
		}
		
	}
 	return 0;
}