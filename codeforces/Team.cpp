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
	
	int n; cin>>n;
	int j=0;
	while(n--){
		int count=0;
		
		for(int i=0;i<3;i++){
			int a;
			cin>>a;
			if(a==1){
				count++;
			}
		}
		if(count>=2){
				j++;
			}
		
	}
	cout<<j<<endl;
	
		
}
