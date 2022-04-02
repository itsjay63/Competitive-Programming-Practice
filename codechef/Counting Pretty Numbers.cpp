//---------------------------------------------------------------------------------------
//-------------------Author : itsjaysuthar ----------------------------------------------
//---------------------------------------------------------------------------------------




#include<bits/stdc++.h>
using namespace std;

int main()
{ 
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//#endif 
	
	int t;
	cin>>t;
	if(t>=1 && t<=100){
		while(t--){
		int l,r,count=0;	
		cin>>l>>r;
			if((l>=1 && l<=100000) && (r>=1 && r<=100000)){
				
				for(int i=l;i<=r;i++){
					if(i%10==2 || i%10==3 || i%10==9){
						count++;
					}
				}
				
			}
			cout<<count<<endl;
		}
	}		
 	return 0;
}