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
	if(t>=1 && t<=100){
		while(t--){
		int sa,sb,sc;
		cin>>sa>>sb>>sc;
		if((sa>=1 && sa<=100)&&(sb>=1 && sb<=100)&&(sc>=1 && sc<=100)){
			if(sa!=sb && sa!=sc){
				if(sa<sb && sa<sc) cout<<"Draw"<<endl;
				if(sb<sa && sb<sc) cout<<"Bob"<<endl;
				if(sc<sb && sc<sa) cout<<"Alice"<<endl;
			}
		}
		}
	}		
 	return 0;
}