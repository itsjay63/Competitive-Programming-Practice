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
		int r1,w1,c1,r2,w2,c2;;
		cin>>r1>>w1>>c1;
		cin>>r2>>w2>>c2;
		int a=0,b=0;
		if((r1>=0 && r1<=500)&&(r2>=0 && r2<=500)&&(w1>=0 && w1<=20)&&(w2>=0 && w2<=20)&&(c1>=0 && c1<=20)&&(c2>=0 && c2<=20))
		{
			if((r1 != r2)&&(w1 != w2)&&(c1 != c2)){
				if(r1>r2) a++;
				else b++;
				if(c1>c2) a++;
				else b++;
				if(w1>w2) a++;
				else b++;
				if(a>b) cout<<"A"<<endl;
				else cout<<"B"<<endl;
			}
		}
		
	}
 	return 0;
}
}