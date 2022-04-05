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
	if(t>=1 && t<=8){
		while(t--){
		int arr[3];
		int count0=0;
		int count1=0;
		for(int i=0;i<3;i++){
			cin>>arr[i];
		}
		for(int i=0;i<3;i++){
			if(arr[i]==0) count0++;
			if(arr[i]==1) count1++;
		}
		if((count0 != 0) && (count1 != 0)){
			cout<<"1"<<endl;
		}
		else cout<<"0"<<endl;
	}
	}
return 0;
}