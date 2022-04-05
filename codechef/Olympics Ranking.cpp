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
	if(t>=1 && t<=1000){
		while(t--){
		int g1,s1,b1; cin>>g1>>s1>>b1;
		int g2,s2,b2; cin>>g2>>s2>>b2;
		if((g1>=0 && g1<=30)&&(g2>=0 && g2<=30)&&
			(s1>=0 && s1<=30)&&(s2>=0 && s2<=30)&&
			(b1>=0 && b1<=30)&&(b2>=0 && b2<=30)&&
			((g1+s1+b1)!=(g2+s2+b2)))
		{
			if((g1+b1+s1)>(g2+b2+s2)) cout<<"1"<<endl;
			if((g1+b1+s1)<(g2+b2+s2)) cout<<"2"<<endl;
		}
				
		}
	}
	return 0;
}