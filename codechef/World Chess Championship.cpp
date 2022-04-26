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
	
	
	int t; cin>>t;
	if(t>=1 and t<=1000){
		while(t--){
			int x; cin>>x;
			if(x>=1 and x<=1e6){
				string s;
				cin>>s;
				int countc=0;
				int countn=0;
				int countcd=0;
				int countnd=0;
				for(int i=0;i<s.size();i++){
					if(s[i]=='D'){
						countcd++;
						countnd++;
					}else if(s[i]=='C'){
						countc++;
					}else if(s[i]=='N'){
						countn++;
					}
				}
				//cout<<countc*2 + countcd*1 <<" "<<countn*2 + countnd*1<<endl;
				if(countc*2 + countcd*1 == countn*2 + countnd*1){
					cout<< 55*x<<endl;
				}else if(countc*2 + countcd*1 > countn*2 + countnd*1){
					cout<< 60*x<<endl;
				}else if(countc*2 + countcd*1 < countn*2 + countnd*1){
					cout<< 40*x<<endl;
				}
			}
		}
			
	}	
}
	
	
