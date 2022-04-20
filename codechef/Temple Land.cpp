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
		int s; 
		cin>>s;
		vector<int> v;
		for(int i=0;i<s;i++){
				int n;
				cin>>n;
				v.push_back(n);
		}
		if(s%2==0) cout<<"no";
		else{
			if(v[0]==1 && v[s-1]==1){
				int i=0,j=s-1;
				int count=0;
				while(i<=j && i<s/2){
					if(v[i]==v[j]){
						if(v[i]+1 == v[i+1] && v[j]+1 == v[j-1])
							count++;
					}
					i++;
					j--;
				}
				if(count==s/2) cout<<"yes";
				else cout<<"no";
			}
			else cout<<"no";
		}
		
			
		cout<<endl;
		
	}
	
	
		
}