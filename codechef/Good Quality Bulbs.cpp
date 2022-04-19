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
	while(t--){
		int n,x; cin>>n>>x;
		int arr[n-1]={0};
		int sum=0;
		for(int i=0;i<=n-2;i++){
			cin>>arr[i];
			sum = sum + arr[i];
		}
		int i=0, ans=0;
		while(ans<x){
			ans=((sum+i)/n);
			if(ans>=x){
				cout<<i<<endl;
				break;
			}
			i++;
			
		}
	}
	
	return 0;
}