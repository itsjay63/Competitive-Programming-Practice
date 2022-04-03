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
	
	char c1,c2;
	cin>>c1>>c2;
	int i1,i2;
	if(c1=='R') i1=1;
	else if(c1=='B') i1=2;
	else if(c1=='G') i1=3;

	if(c2=='R') i2=1;
	else if(c2=='B') i2=2;
	else if(c2=='G') i2=3;
	
	if(i1<=i2 || i1==i2) {
		cout<<c1<<endl;
	}
	else {
		cout<<c2<<endl;	
	}
 	return 0;
}