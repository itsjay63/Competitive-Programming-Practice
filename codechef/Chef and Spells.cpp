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
	int t; cin>>t;
	if(t>=1 && t<=10000){
		while(t--){
			int a,b,c;
		cin>>a>>b>>c;
		if((a>=1 && a<=100000000)&&
			(b>=1 && b<=100000000)&&
			(c>=1 && c<=100000000)){
			int sum1=0,sum2=0,sum3=0,ans;
			sum1=a+b;
			sum2=b+c;
			if(sum1>=sum2) ans=sum1;
			else ans=sum2;
			sum3=a+c;
			if(sum3>=ans) ans=sum3;
			cout<<ans<<endl;		
		}
		}
	}
		
return 0;
}