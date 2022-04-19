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
	while(t--){
		vector<char> v;
		int r; 
		cin>>r;
		cin.ignore();
		string l;
		getline(cin, l);
		for(int i=0;i<r;i++){
			if(l[i] == 'H' || l[i]=='T'){
				v.push_back(l[i]);
			}
		}
		int s=v.size();
		if(s%2==0){
			int a=0;
			for(int i=0;i<v.size();i+=2){
			if(v[i]=='H' && v[i+1]=='T'){
				a++;
				}
			}
			if(a==(s/2)) cout<<"Valid"<<endl;
			else cout<<"Invalid"<<endl;
			
		}
		else{
			cout<<"Invalid"<<endl;
		}		
	}
}