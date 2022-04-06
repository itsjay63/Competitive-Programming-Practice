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
	if(t>=1 && t<=100000){
		while(t--){
			int d,l,r; cin>>d>>l>>r;
			if((d>=1 && d<=1000000000)&&
				(l>=1 && l<=1000000000)&&
				(r>=1 && r<=1000000000))
			{
				if(d>=l && d<=r) cout<<"Take second dose now"<<endl;
				if(d<l) cout<<"Too Early"<<endl;
				if(d>r) cout<<"Too Late"<<endl;
			}
		}
	}
return 0;
}