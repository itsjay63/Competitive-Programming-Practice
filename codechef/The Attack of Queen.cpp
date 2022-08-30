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
	//method -1 
	// int t;
	// cin>>t;
	// while(t--){
	// 	int n,a,b; cin>>n>>a>>b;
	// 	int sum = 0;
	// 	if(n==1){
	// 		sum=0;
	// 	}
	// 	else if(n>1)
	// 	{
	// 		sum = (n-1) * 2;
	// 		int a1 = a;
	// 		int b1 = b;
	// 		while(a1>=1 and b1>=1){
	// 			a1--;
	// 			b1--;
	// 			if(a1>=1 and b1>=1)	sum++;
	// 	}
	// 		int a2 = a;
	// 		int b2 = b;
	// 		while(a2<=n and b2<=n){
	// 			a2++;
	// 			b2++;
	// 			if(a2<=n and b2<=n)	sum++;
	// 	}
	// 		int a3 = a;
	// 		int b3 = b;
	// 		while(a3>=1 and b3<=n){
	// 			a3--;
	// 			b3++;
	// 			if(a3>=1 and b3<=n)	sum++;
	// 	}
	// 		int a4 = a;
	// 		int b4 = b;
	// 		while(a4<=n and b4>=1){
	// 			a4++;
	// 			b4--;
	// 			if(a4<=n and b4>=1)	sum++;
	// 		}
	// 	}
	// 	cout<<sum<<endl;
		
	// }
	
	//method - 2
	int t; cin>>t;
	while(t--){
		int n,x,y; cin>>n>>x>>y;
		int sum = 0;
		if(n>1){
			sum = (n-1) * 2;
			int a1 = x - 1;
			int b1 = y - 1;
			sum = sum + min(a1,b1);
			int a2 = n - x;
			int b2 = n - y;
			sum = sum + min(a2,b2);
			int a3 = x - 1;
			int b3 = n - y;
			sum = sum + min(a3,b3);
			int a4 = n - x;
			int b4 = y - 1;
			sum = sum + min(a4,b4);
	}
		cout<<sum<<endl;	
}
}
		
	
		
	

