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
		int arr1[3],arr2[3];
		int counta1=0,counta0=0,countb0=0,countb1=0;
		for(int i=0;i<3;i++){
			cin>>arr1[i];
		}
		for(int i=0;i<3;i++){
			cin>>arr2[i];
		}
		for(int i=0;i<3;i++){
			if(arr1[i]==1) counta1++;
			if(arr1[i]==0) counta0++;
		}
		for(int i=0;i<3;i++){
			if(arr2[i]==1) countb1++;
			if(arr2[i]==0) countb0++;
		}
		if((counta1==countb1)&&(counta0==countb0)){
			cout<<"Pass"<<endl;
		}
		else {
			cout<<"Fail"<<endl;
		}
		
	}
return 0;
}