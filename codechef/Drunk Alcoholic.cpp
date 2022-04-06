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
		int k,steps=0; cin>>k;
		for(int i=1;i<=k;i++){
			if(i%2 != 0) steps+=3;
			else steps-=1;
		}
		cout<<steps<<endl;
	}
	
return 0;
}