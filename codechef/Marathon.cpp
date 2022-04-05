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
	if(t>=1 && t<=50){
		while(t--){
			int D,d,a,b,c;
			cin>>D>>d>>a>>b>>c;
			int total= (D*d);
	        if(total>=42){
	            cout<<c<<endl;
	        }else if(total>=21){
	            cout<<b<<endl;
	        }else if(total>=10){
	            cout<<a<<endl;
	        }else{
	            cout<<"0"<<endl;
	        }
		}
	}
return 0;
}