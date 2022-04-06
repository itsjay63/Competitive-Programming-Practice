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
			int x,y,a,b,k; cin>>x>>y>>a>>b>>k;
			if((k>=1 && k<=1000)&&
				(x>=0 && x<=1000)&&
				(y>=0 && y<=1000)&&
				(a>=0 && a<=1000)&&
				(b>=0 && b<=1000))
			{
				for(int i=0;i<k;i++){
					x=x+a;
					y=y+b;
				}
				if(x>y) cout<<"DIESEL"<<endl;
				if(x==y) cout<<"SAME PRICE"<<endl;
				if(x<y) cout<<"PETROL" <<endl;
				
			}
		}
	}
	
return 0;
}