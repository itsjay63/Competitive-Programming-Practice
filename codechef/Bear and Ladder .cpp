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
	
	int q;
	cin>>q;
	if(q>=1 && q<=1000){
		while(q--){
		long long a,b;	
		cin>>a>>b;
		if((a>=1 && a<=1000000000)&&(b>=1 && b<=1000000000)){
			if(a>b){
				long long temp = a;
				a=b;
				b=temp;
			}
			if(a-b==2 || a-b== -2){
				cout<<"YES"<<endl;
			}
			else if((a-b==1 || a-b==-1) && b%2==0){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
		}
	}		
 	return 0;
}