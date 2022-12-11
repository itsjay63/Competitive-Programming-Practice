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
	
	
	int k,n,w;
	cin>>k>>n>>w;
	int sum=0;
	for(int i=1;i<=w;i++){
		
		sum = sum + (k*i);
	}
	if(sum>n)
		cout<<sum-n<<endl;
	else
		cout<<0<<endl;
	
		
}
		
	
		
	

