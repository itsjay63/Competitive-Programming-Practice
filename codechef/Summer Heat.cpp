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
	if(t>=1 && t<=15000){
		while(t--){
			int xa,xb,Xa,Xb; cin>>xa>>xb>>Xa>>Xb;
			if((xa>=100 && xa<=200)&&
		   	(xb>=400 && xb<=500)&&
		   	(Xa>=1000 && Xa<=1200)&&
		   	(Xa>=1000 && Xb<=1500))
		   	{
				cout<<(Xa/xa)+(Xb/xb)<<endl;
			}
		}
	}	
	return 0;
}