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
	if(t>=1 && t<=50){
		while(t--){
			int x;
			cin>> x;
			if(x>=1 && x<=300){
				if(x>=1 && x<100) cout<<"Easy"<<endl;
				if(x>=100 && x<200) cout<<"Medium"<<endl;
				if(x>=200 && x<=300) cout<<"Hard"<<endl;
			}
		}
	}
return 0;
}