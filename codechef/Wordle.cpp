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
	while(t--)
	{
		string s1,s2,s3;
		cin>>s1;
		cin>>s2;
		
		for(int i=0;i<5;i++){
			if(s1[i]==s2[i]) s3.push_back('G');
			else s3.push_back('B');
		}
		cout<<s3<<endl;
	
	}
}