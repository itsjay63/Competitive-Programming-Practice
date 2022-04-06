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
		int arr[10];
		int t1=0,t2=0;
		for(int i=0;i<10;i++){
			cin>>arr[i];
		}
		for(int i=0;i<10;i++){
			if(i%2==0 && arr[i]==1) t1++;
			if(i%2 != 0 && arr[i]==1) t2++;
		}
		if(t1>t2) cout<<"1"<<endl;
		if(t1==t2) cout<<"0"<<endl;
		if(t1<t2) cout<<"2"<<endl;
	}
	
return 0;
}