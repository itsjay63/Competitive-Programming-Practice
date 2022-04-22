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
	
	int a,b; cin>>a>>b;
	if(a==0 && b==0 || a==0 && b==1)
		cout<<"https://www.codechef.com/practice"<<endl;
	else if(a==1 && b==0)
		cout<<"https://www.codechef.com/contests"<<endl;
	else if(a==1 && b==1)
		cout<<"https://discuss.codechef.com"<<endl;
}