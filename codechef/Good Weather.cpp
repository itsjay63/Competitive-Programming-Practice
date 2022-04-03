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
		int count1=0;
		int count2=0;
		int arr[7];
		for(int i=0;i<7;i++){
			int a;
			cin>>a;
			arr[i]=a;
		}
		for(int i=0;i<7;i++){
			if(arr[i]==1) count1++;
			if(arr[i]==0) count2++;
		}
		if(count1>count2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
 	return 0;
}